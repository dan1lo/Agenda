//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "calendario.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CCALENDR"
#pragma resource "*.dfm"
Tfrmcalendario *frmcalendario;
//---------------------------------------------------------------------------
__fastcall Tfrmcalendario::Tfrmcalendario(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmcalendario::brtfecharClick(TObject *Sender)
{
frmcalendario->Close();
}
//---------------------------------------------------------------------------

