//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h" //baza
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
DB connection;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
bool check_pass(String pass,String repass)
{
        if(pass.operator==(repass))
                return 1;
        ShowMessage("Has³a musz¹ byc takie same!");
        return 0;
}

bool check_login(String login)
{
        MYSQL *connect=connection.connect_db();
        if(connect==NULL)
                ShowMessage("Nie uda³o sie polaczyc");

        String check;
        String zapytanie="SELECT login FROM users WHERE login='"+login+"'";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        check=check+row[0];
                        if(login.operator==(check))
                                return 0;
                        check="";
                }
        }
        mysql_close(connect);
        return 1;
}

bool signup(String login,String password)
{
        MYSQL *connect=connection.connect_db();
        if(connect==NULL)
               return 0;

        AnsiString caption;
        String zapytanie="INSERT INTO `users`(`login`, `password`) VALUES ('"+login+"','"+password+"')";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate!=0)
        {
                ShowMessage("Nie uda³o sie polaczyc z baza!");
                return 0;
        }
        mysql_close(connect);
        return 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
        Form3->Close();
        Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
        if(check_login(login->Text)==1)
                if(check_pass(password->Text,repassword->Text)==1)
                        if(signup(login->Text,password->Text)==1)
                        {
                                ShowMessage("Poprawnie sie zarejestrowales!");
                                Form3->Close();
                                Form2->Show();
                        }

}
//---------------------------------------------------------------------------

