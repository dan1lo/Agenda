//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "cadastro.h"
#include "calendario.h"
#include "exclusao.h"
#include "atualizar.h"
#include "login.h"
#include "manual.h"
#include "loginuse.h"

#include "agenda.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CCALENDR"
#pragma link "CGAUGES"
#pragma resource "*.dfm"
Tfrmagenda *frmagenda;

//---------------------------------------------------------------------------
__fastcall Tfrmagenda::Tfrmagenda(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall Tfrmagenda::Calendrio1Click(TObject *Sender)
{
frmcalendario->Show();
Fecharcalendrio1->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Fecharcalendrio1Click(TObject *Sender)
{
Fecharcalendrio1->Visible=false;

}
//---------------------------------------------------------------------------


void __fastcall Tfrmagenda::FormCreate(TObject *Sender)
{
  Modoavanado1->Enabled=true;
  Modobsico1->Enabled=false;
}
//---------------------------------------------------------------------------



//----------------------------------------------------------------------------
void __fastcall Tfrmagenda::brtatualizarClick(TObject *Sender)
{
if(tbcontatos->Active){
        tbcontatos->Active=!tbcontatos->Active;
        tbcontatos->Active=!tbcontatos->Active;
        }
}
//---------------------------------------------------------------------------


void __fastcall Tfrmagenda::brtcontatoClick(TObject *Sender)
{
frmcadastro->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::New1Click(TObject *Sender)
{
frmcadastro->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Exit1Click(TObject *Sender)
{
frmagenda->Close();
frmloginuse->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Close1Click(TObject *Sender)
{
tbcontatos->Active=false;

}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::brtexcluirClick(TObject *Sender)
{
frmexcluir->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::edtbuscaChange(TObject *Sender)
{
 AnsiString pesquisa;
if(edtbusca->Text=="")
      DBGrid1->DataSource=DataSource1;

if(edtbusca->Text!="" && cboxpesquisar->Text!=""){
      DBGrid1->DataSource=DataSource2;
      if(cboxpesquisar->Text=="Sobre nome"){
          pesquisa="SELECT * FROM Contatos WHERE nome LIKE '%"+edtbusca->Text+"%'";
          Qryexe->SQL->Clear();
          Qryexe->SQL->Add(pesquisa);
          Qryexe->Open();
          }
      else if(cboxpesquisar->Text=="Endere�o"){
            pesquisa="SELECT * FROM Contatos WHERE endere�o LIKE '"+edtbusca->Text+"%'";
            Qryexe->SQL->Clear();
            Qryexe->SQL->Add(pesquisa);
            Qryexe->Open();
           }
      else if(cboxpesquisar->Text=="E-Mail"){
            pesquisa="SELECT * FROM Contatos WHERE email LIKE '"+edtbusca->Text+"%'";
            Qryexe->SQL->Clear();
            Qryexe->SQL->Add(pesquisa);
            Qryexe->Open();
           }
      }
else if(edtbusca->Text!=""){
      pesquisa="SELECT * FROM Contatos WHERE nome LIKE '"+edtbusca->Text+"%'";
      DBGrid1->DataSource=DataSource2;
      Qryexe->SQL->Clear();
      Qryexe->SQL->Add(pesquisa);
      Qryexe->Open();
      }
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::cboxpesquisarChange(TObject *Sender)
{
AnsiString pesquisa;

if(edtbusca->Text!="" && cboxpesquisar->Text!=""){
      DBGrid1->DataSource=DataSource2;
      if(cboxpesquisar->Text=="Sobre nome"){
          pesquisa="SELECT * FROM Contatos WHERE nome LIKE '%"+edtbusca->Text+"%'";
          Qryexe->SQL->Clear();
          Qryexe->SQL->Add(pesquisa);
          Qryexe->Open();
          }
      else if(cboxpesquisar->Text=="Endere�o"){
            pesquisa="SELECT * FROM Contatos WHERE endere�o LIKE '"+edtbusca->Text+"%'";
            Qryexe->SQL->Clear();
            Qryexe->SQL->Add(pesquisa);
            Qryexe->Open();
           }
      else if(cboxpesquisar->Text=="E-Mail"){
            pesquisa="SELECT * FROM Contatos WHERE e-mail LIKE '"+edtbusca->Text+"%'";
            Qryexe->SQL->Clear();
            Qryexe->SQL->Add(pesquisa);
            Qryexe->Open();
           }
      }
}
//---------------------------------------------------------------------------



void __fastcall Tfrmagenda::brtatual_contatoClick(TObject *Sender)
{
frmatual->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tfrmagenda::SobreoSoftware1Click(TObject *Sender)
{
 frmlogin->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Modobsico1Click(TObject *Sender)
{
 cboxpesquisar->Visible=false;
 lbltipo->Visible=false;
 Modobsico1->Enabled=false;
 Modoavanado1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Modoavanado1Click(TObject *Sender)
{
  cboxpesquisar->Visible=true;
 lbltipo->Visible=true;
 Modoavanado1->Enabled=false;
 Modobsico1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Manual1Click(TObject *Sender)
{
 frmmanual->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::FormClose(TObject *Sender,
      TCloseAction &Action)
{
frmloginuse->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmagenda::Cadastrarnovousurio1Click(TObject *Sender)
{
  frmloginuse->edtuse->Text="";
  frmloginuse->edtsenha->Text="";
  frmloginuse->Visible= true;
  frmloginuse->brtok->Visible=false;
  frmloginuse->brtsair->Visible=false;
  frmloginuse->brtcadastrar->Visible=true;
  frmloginuse->brtcancela->Visible=true;
}
//---------------------------------------------------------------------------




