//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "manual.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmmanual *frmmanual;
//---------------------------------------------------------------------------
__fastcall Tfrmmanual::Tfrmmanual(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmmanual::brtsairClick(TObject *Sender)
{
frmmanual->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmmanual::FormCreate(TObject *Sender)
{
Memo1->Lines->LoadFromFile("manual.txt");
}
//---------------------------------------------------------------------------
