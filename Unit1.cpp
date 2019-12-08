//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h> 
#include <string>
#include <cstdlib>
#include "Unit1.h"
#include <windows.h>
#include <mysql.h>

#define HOST "54.38.50.59"
#define USER "www2857_events"
#define PASS "8GJoBGoc3WUzkUA2rAn3"
#define BASE "www2857_events"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

TButton *array[37];
TButton *button=NULL;
int miesiac=12;
int rok=2019;

//---------------------------------------------------------------------------


MYSQL *connect_db(){
    MYSQL *connect;
    connect = mysql_init(0);
    connect = mysql_real_connect(connect, HOST, USER, PASS, BASE, 0, NULL, 0);

    if(!connect)
    {
        ShowMessage("Nie udalo polaczyc sie z baza MySQL");
        return NULL;
    }
    return connect;
}

void get_event(String year,String month,String day,TLabel *label)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;
               
        AnsiString caption;
        String zapytanie="SELECT DATE_FORMAT(`godzina`,'%H:%i') AS `godzina`,nazwa FROM eventy WHERE data='"+year+"-"+month+"-"+day+"'"+" ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        caption=caption+"\n"+row[0]+" "+row[1];
                        row=mysql_fetch_row(res);
                }
        }

        if(caption=="")
                caption="brak wydarzen";
        label->Caption=caption;

        mysql_close(connect);
}

void add_event(String nazwa,String year,String month,String day)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;

        AnsiString caption;
        String zapytanie="INSERT INTO `eventy`(`id_zadania`, `nazwa`, `data`) VALUES (0,'"+nazwa+"','"+year+"-"+month+"-"+day+"')";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate!=0)
                ShowMessage("Nie udalo polaczyc sie z baza MySQL");
}

void set_date(String day,TLabel *drok,TLabel *dmiesiac,TLabel *ddzien)
{
        drok->Caption=rok;
        dmiesiac->Caption=miesiac;
        ddzien->Caption=day;

}
//---------------------------------------------------------------------------

void set_month(int miesiac,TLabel *Month)
{
        switch(miesiac)
        {
                case 1:
                {
                        Month->Caption="Styczeñ";
                        break;
                }
                case 2:
                {
                        Month->Caption="Luty";
                        break;
                }
                case 3:
                {
                        Month->Caption="Marzec";
                        break;
                }
                case 4:
                {
                        Month->Caption="Kwiecieñ";
                        break;
                }
                case 5:
                {
                        Month->Caption="Maj";
                        break;
                }
                case 6:
                {
                        Month->Caption="Czerwiec";
                        break;
                }
                case 7:
                {
                        Month->Caption="Lipiec";
                        break;
                }
                case 8:
                {
                        Month->Caption="Sierpieñ";
                        break;
                }
                case 9:
                {
                        Month->Caption="Wrzesieñ";
                        break;
                }
                case 10:
                {
                        Month->Caption="PaŸdziernik";
                        break;
                }
                case 11:
                {
                        Month->Caption="Listopad";
                        break;
                }
                case 12:
                {
                        Month->Caption="Grudzieñ";
                        break;
                }
        }
}

int pierwszy(int miesiac,int rok)
{
    if(miesiac>2)
        miesiac-=2;
    else
    {
        miesiac+=10;
        rok--;
    }
    int w=rok/100;
    rok%=100;
    return((13*miesiac - 1)/5 + rok + rok/4 + w/4 + 5*w)%7+1;
}

int ostatni(int miesiac,int rok)
{
        int dni=0;
        if(miesiac==1 || miesiac==3 || miesiac==5 ||miesiac==7
        || miesiac==8 || miesiac==10 || miesiac ==12)
                dni=31;
        else if(miesiac==4 || miesiac==6 || miesiac==9 || miesiac==11)
                dni=30;
        else if((rok%100==0 && rok%400==0 && miesiac%2==0) || (rok%4==0 && rok%100!=0))
                dni=29;
        else
                dni=28;
        return dni;
}

void hide(int first,int days)
{
        for(int i=1;i<38;i++)
        {
                button=array[i];
                if(button->Visible==false)
                        button->Visible=true;
        }

        int last=first+days;
        for(int i=1;i<first;i++)
        {
                button=array[i];
                button->Visible=false;
        }

        for(int i=last;i<38;i++)
        {
                button=array[i];
                button->Visible=false;
        }
}

void set_value(int first,int days)
{
        int last=first+days;
        int counter=1;
        for(int i=first;i<last;i++)
        {
               button=array[i];
               button->Caption=counter;
               counter++;
        }
}

void set_year(TLabel *Year)
{
        Year->Caption=rok;
}

void next_month(TLabel *Month,TLabel *Year)
{
        miesiac++;
        if(miesiac>12)
        {
                rok++;
                miesiac%=12;
        }
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void prev_month(TLabel *Month,TLabel *Year)
{
        miesiac--;
        if(miesiac<1)
        {
                rok--;
                miesiac=12;
        }
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void next_year(TLabel *Month,TLabel *Year)
{
        rok++;
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void prev_year(TLabel *Month,TLabel *Year)
{
        rok--;
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

int calculate_day(int day,int month,int year)
{


        if(day == 0 || month == 0 || year == 0)
                return -1;
        if (month>2)
                month-=2;
        else
        {
                month+=10;
                year--;
        }
        int w=year/100;
        year%=100;
        return (day + (13*month - 1)/5 + year + year/4 + w/4 + 5*w)%7;
}

void which_day(int day,TLabel *label)
{

        switch(day)
        {
                case 1: label->Caption="poniedziaÂ³ek";  break;
                case 2: label->Caption="wtorek";        break;
                case 3: label->Caption="Å“roda";         break;
                case 4: label->Caption="czwartek";      break;
                case 5: label->Caption="piÂ¹tek";        break;
                case 6: label->Caption="sobota";        break;
                case 0: label->Caption="niedziela";     break;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        array[1]=Button1;
        array[2]=Button2;
        array[3]=Button3;
        array[4]=Button4;
        array[5]=Button5;
        array[6]=Button6;
        array[7]=Button7;
        array[8]=Button8;
        array[9]=Button9;
        array[10]=Button10;
        array[11]=Button11;
        array[12]=Button12;
        array[13]=Button13;
        array[14]=Button14;
        array[15]=Button15;
        array[16]=Button16;
        array[17]=Button17;
        array[18]=Button18;
        array[19]=Button19;
        array[20]=Button20;
        array[21]=Button21;
        array[22]=Button22;
        array[23]=Button23;
        array[24]=Button24;
        array[25]=Button25;
        array[26]=Button26;
        array[27]=Button27;
        array[28]=Button28;
        array[29]=Button29;
        array[30]=Button30;
        array[31]=Button31;
        array[32]=Button32;
        array[33]=Button33;
        array[34]=Button34;
        array[35]=Button35;
        array[36]=Button36;
        array[37]=Button37;

        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button39Click(TObject *Sender)
{
        next_month(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button38Click(TObject *Sender)
{
        prev_month(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Calculate_dateClick(TObject *Sender)
{
        int day=atoi((Dzien->Text).c_str());
        int month=atoi((Miesiac->Text).c_str());
        int year=atoi((Rok->Text).c_str());

// walidacja niepoprawnych dat

        if(day <= 0 || day >31)
                Dzien->Color = clRed;
        else if (day > ostatni(month,year))
                Dzien->Color = clRed;
        else
                Dzien->Color=clWhite;


        if(year <= 0)
                Rok->Color = clRed;
        else
                Rok->Color = clWhite;


        if(month <= 0 || month >12){
                Miesiac->Color = clRed;
                Label1->Visible = false;
        } else
                Miesiac->Color = clWhite;

        if(month == 2) {
					
                        if(ostatni(month,year) < day){
                        Dzien->Color = clRed;
		       	Miesiac->Color = clRed;
                } else {
                        Miesiac->Color = clWhite;
                        Label1->Visible = true;
                        }
        }

        if(Dzien->Color == clRed || Miesiac->Color == clRed || Rok->Color == clRed)
                Label1->Visible = false;
        else
                Label1->Visible = true;

        if(Label1->Visible != false) {
        which_day(calculate_day(day,month,year),Label1);
        Label1->Visible=true;
        } else
                ShowMessage("\n\nWystÂ¹piÂ³ bÂ³Â¹d podczas wprowadzania daty!\nZwrÃ³Ã¦ uwagÃª na pola w kolorze czerwonym.\n\n");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button40Click(TObject *Sender)
{
        prev_year(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button41Click(TObject *Sender)
{
        next_year(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        String day=Button1->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        String day=Button2->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        String day=Button2->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        String day=Button3->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
        String day=Button5->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        String day=Button6->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        String day=Button7->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
        String day=Button8->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
        String day=Button9->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
        String day=Button10->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
        String day=Button11->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
        String day=Button12->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
        String day=Button13->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
        String day=Button14->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
        String day=Button15->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
        String day=Button16->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
        String day=Button17->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
        String day=Button18->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
        String day=Button19->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
        String day=Button20->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
        String day=Button21->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
        String day=Button22->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
        String day=Button23->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
        String day=Button24->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button25Click(TObject *Sender)
{
        String day=Button25->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{
        String day=Button26->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button27Click(TObject *Sender)
{
        String day=Button27->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button28Click(TObject *Sender)
{
        String day=Button28->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender)
{
        String day=Button29->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
        String day=Button30->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender)
{
        String day=Button31->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender)
{
        String day=Button32->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
        String day=Button33->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button34Click(TObject *Sender)
{
        String day=Button34->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button35Click(TObject *Sender)
{
        String day=Button35->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button36Click(TObject *Sender)
{
        String day=Button36->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button37Click(TObject *Sender)
{
        String day=Button37->Caption;
        get_event(rok,miesiac,day,Label12);
        set_date(day,Label13,Label14,Label15);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button42Click(TObject *Sender)
{
        add_event(Edit1->Text,Label13->Caption,Label14->Caption,Label15->Caption);
        Label13->Caption="";
        Label14->Caption="";
        Label15->Caption="";
        Edit1->Text="";
}
//---------------------------------------------------------------------------

