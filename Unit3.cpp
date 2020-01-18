//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DB.h"
#include "Unit1.h"
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

void __fastcall TForm3::Button2Click(TObject *Sender)
{
        Form3->Close();
        Form2->Show();
        login->Text="";
        password->Text="";
        repassword->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
        if(connection.check_login(login->Text)==1)
                if(connection.check_pass(password->Text,repassword->Text)==1)
                        if(connection.signup(login->Text,password->Text)==1)
                        {
                                ShowMessage("Poprawnie sie zarejestrowales!");
                                Form3->Close();
                                Form2->Show();
                        }

        login->Text="";
        password->Text="";
        repassword->Text="";

}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormKeyPress(TObject *Sender, char &Key)
{
        char klawisz='\r';
        if(Key==klawisz)
                Button1->OnClick(Sender);
}
//---------------------------------------------------------------------------

