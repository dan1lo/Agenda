//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "cadastro.h"
#include "classecontato.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

Tfrmcadastro *frmcadastro;

//---------------------------------------------------------------------------
__fastcall Tfrmcadastro::Tfrmcadastro(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall Tfrmcadastro::brtsalvarClick(TObject *Sender)
{

AnsiString myQuery;
String texto="Digite aqui"  ;
if(edtnome->Text==texto || edtendereco->Text==texto || edtnumero->Text==texto || edtmail->Text==texto)
     ShowMessage("Forneça valores nos campos");
else if(edtnumero->Text!=""){
        contato contato1;
        contato1.Setnome(edtnome->Text);
        contato1.Setendereco(edtendereco->Text);
        contato1.Settelefone(edtnumero->Text);
        contato1.Setemail(edtmail->Text);
        myQuery = "INSERT INTO Contatos VALUES (  '"+
                  contato1.Getnome() + "', '" +
                  contato1.Getendereco() + "', '" +
                  contato1.Gettelefone() + "', '" +
                  contato1.Getemail() + "')";

        Qrycadastro->SQL->Clear(); // Limpa queries, se houver alguma
        Qrycadastro->SQL->Add( myQuery ); // Adiciona uma query para ser executada

        Qrycadastro->ExecSQL(); // Executa query
         edtnumero->Text="";
         edtnome->Text="";
         edtendereco->Text="" ;
         edtmail->Text="";
    }
else ShowMessage("Preencha ao menos o campo número");
}
//---------------------------------------------------------------------------

void __fastcall Tfrmcadastro::brtcancelarClick(TObject *Sender)
{

  edtnumero->Text="";
  edtnome->Text="";
  edtendereco->Text="" ;
  edtmail->Text="";
}
//---------------------------------------------------------------------------


void __fastcall Tfrmcadastro::brtsairClick(TObject *Sender)
{
frmcadastro->Close();
}
//---------------------------------------------------------------------------


