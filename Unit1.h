//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        TButton *Button12;
        TButton *Button13;
        TButton *Button14;
        TButton *Button15;
        TButton *Button16;
        TButton *Button17;
        TButton *Button18;
        TButton *Button19;
        TButton *Button20;
        TButton *Button21;
        TButton *Button22;
        TButton *Button23;
        TButton *Button24;
        TButton *Button25;
        TButton *Button26;
        TButton *Button27;
        TButton *Button28;
        TButton *Button29;
        TButton *Button30;
        TButton *Button31;
        TButton *Button32;
        TButton *Button33;
        TButton *Button34;
        TButton *Button35;
        TButton *Button36;
        TButton *Button37;
        TButton *Button38;
        TButton *Button39;
        TLabel *Month;
        TLabel *Year;
        TButton *Calculate_date;
        TLabel *Label1;
        TEdit *Miesiac;
        TEdit *Rok;
        TEdit *Dzien;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TButton *Button40;
        TButton *Button41;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button39Click(TObject *Sender);
        void __fastcall Button38Click(TObject *Sender);
        void __fastcall Calculate_dateClick(TObject *Sender);
        void __fastcall Button40Click(TObject *Sender);
        void __fastcall Button41Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
