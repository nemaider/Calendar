//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h" //baza
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm2 *Form2;
DB polaczenie;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
bool logining(String login,String password)
{
        MYSQL *connect=polaczenie.connect_db();
        if(connect==NULL)
               return 0;

        AnsiString caption;
        String zapytanie="SELECT login FROM users WHERE login='"+login+"' AND password='"+password+"'";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                        return 1;
        }
        mysql_close(connect);
        return 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
        if(logining(login->Text,password->Text)==0)
                ShowMessage("Nieprawid³owe dane!");
        else
        {
                Form2->Hide();
                Form1->Show();
                Form1->user->Caption=login->Text;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
        Form2->Hide();
        Form3->Show();        
}
//---------------------------------------------------------------------------



