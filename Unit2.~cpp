//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DB.h"
#include "Unit1.h"
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

void __fastcall TForm2::Button1Click(TObject *Sender)
{
        if(polaczenie.logining(login->Text,password->Text)==0)
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
void __fastcall TForm2::FormKeyPress(TObject *Sender, char &Key)
{
        char klawisz='\r';
        if(Key==klawisz)
                Button1->OnClick(Sender);
}
//---------------------------------------------------------------------------

