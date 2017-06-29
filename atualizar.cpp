//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "atualizar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmatual *frmatual;

//---------------------------------------------------------------------------
__fastcall Tfrmatual::Tfrmatual(TComponent* Owner)
        : TForm(Owner)
{


}
//---------------------------------------------------------------------------

void __fastcall Tfrmatual::brtatualizarClick(TObject *Sender)
{
String teste="Digite aqui" , dado;
char *menssagem="Deseja realmente atualizar o contato?",*titulo="confirma��o";
int botao;
AnsiString sql;

if(edtdado->Text!="") {

    if(rgatual->ItemIndex == 2) dado=InputBox("Digite o nome do contato.","Nome: ", "Digite aqui");
    else  dado=InputBox("Digite o telefone do contato.","Telefone: ", "Digite aqui");

    botao=MessageBox(frmatual->Handle,menssagem,titulo,MB_ICONQUESTION+MB_YESNOCANCEL);
     }
else ShowMessage("Forne�a valores nos campos!");

if(botao==IDYES){
    switch(rgatual->ItemIndex){
        case 0:
                sql= "UPDATE contatos SET nome='"+edtdado->Text+"' WHERE telefone='"+dado+"'";
                break;
        case 1:
                sql= "UPDATE contatos SET endere�o='"+edtdado->Text+"' WHERE telefone='"+dado+"'";
                break;
        case 2:
                sql= "UPDATE contatos SET telefone='"+edtdado->Text+"' WHERE nome='"+dado+"'";
                break;
        case 3:
                sql= "UPDATE contatos SET email='"+edtdado->Text+"' WHERE telefone='"+dado+"'";
                break;
         }
    Query1->SQL->Clear();
    Query1->SQL->Add(sql);
    Query1->ExecSQL();
    edtnome->Text="";
    brtatualizar->Visible=false;
    txstdado->Visible=false;
    edtdado->Visible=false;
    }
}
//---------------------------------------------------------------------------

void __fastcall Tfrmatual::edtnomeChange(TObject *Sender)
{
AnsiString sql;
if(edtnome->Text!=""){
 sql="SELECT nome,telefone FROM Contatos WHERE nome LIKE '"+edtnome->Text+"%' " ;
    Query1->SQL->Clear();
    Query1->SQL->Add(sql);
    Query1->Open();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tfrmatual::rgatualClick(TObject *Sender)
{
if(rgatual->ItemIndex >= 0){
             txstdado->Visible=true;
             edtdado->Visible=true;
             brtatualizar->Visible=true;
}

}
//---------------------------------------------------------------------------
void __fastcall Tfrmatual::brtsairClick(TObject *Sender)
{
 frmatual->Close();
}
//---------------------------------------------------------------------------
