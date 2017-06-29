//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "exclusao.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmexcluir *frmexcluir;
//---------------------------------------------------------------------------
__fastcall Tfrmexcluir::Tfrmexcluir(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall Tfrmexcluir::brtexcluirClick(TObject *Sender)
{
String teste="Digite aqui";
char *menssagem="Deseja realmente excluir o contato?",*titulo="confirmação";
int botao;
AnsiString sql;

if(edtnumero->Text!=teste && edtnumero->Text!="")
    botao=MessageBox(frmexcluir->Handle,menssagem,titulo,MB_ICONQUESTION+MB_OK);
else ShowMessage("Forneça valores nos campos!");
if(botao==IDOK){
    sql= "DELETE  FROM Contatos WHERE telefone='"+edtnumero->Text+"'";
    Query1->SQL->Clear();
    Query1->SQL->Add(sql);
    Query1->ExecSQL();
    edtnumero->Text=teste;
    edtnome->Text=teste;
    edtnumero->Visible=false;
    lblnumero->Visible=false;
    brtexcluir->Visible=false;
    frmexcluir->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall Tfrmexcluir::edtnomeChange(TObject *Sender)
{
AnsiString sql;
if(edtnome->Text!=""){
 sql="SELECT nome,telefone FROM Contatos WHERE nome LIKE '"+edtnome->Text+"%' " ;
    Query1->SQL->Clear();
    Query1->SQL->Add(sql);
    Query1->Open();
    edtnumero->Visible=true;
    lblnumero->Visible=true;
    brtexcluir->Visible=true;
    }
}
//---------------------------------------------------------------------------





