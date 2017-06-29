//---------------------------------------------------------------------------

#ifndef cadastroH
#define cadastroH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tfrmcadastro : public TForm
{
__published:	// IDE-managed Components
        TEdit *edtnome;
        TEdit *edtendereco;
        TEdit *edtnumero;
        TEdit *edtmail;
        TLabel *lblnome;
        TLabel *lblendereco;
        TLabel *lblnumero;
        TLabel *lblmail;
        TBitBtn *brtsalvar;
        TQuery *Qrycadastro;
        TDataSource *DataSource1;
        TButton *brtcancelar;
        TButton *brtsair;
        void __fastcall brtsalvarClick(TObject *Sender);
        void __fastcall brtcancelarClick(TObject *Sender);
        void __fastcall brtsairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmcadastro(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmcadastro *frmcadastro;
//---------------------------------------------------------------------------
#endif
