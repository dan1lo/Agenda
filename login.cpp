//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmlogin *frmlogin;
//---------------------------------------------------------------------------
__fastcall Tfrmlogin::Tfrmlogin(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmlogin::FormCreate(TObject *Sender)
{
Memo1->Lines->LoadFromFile("licenca.txt");
}
//---------------------------------------------------------------------------


void __fastcall Tfrmlogin::brtokClick(TObject *Sender)
{
frmlogin->Close();
}
//---------------------------------------------------------------------------

