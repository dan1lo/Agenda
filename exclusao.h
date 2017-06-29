//---------------------------------------------------------------------------

#ifndef exclusaoH
#define exclusaoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tfrmexcluir : public TForm
{
__published:	// IDE-managed Components
        TEdit *edtnome;
        TEdit *edtnumero;
        TLabel *lblnome;
        TLabel *lblnumero;
        TButton *brtexcluir;
        TQuery *Query1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        void __fastcall brtexcluirClick(TObject *Sender);
        void __fastcall edtnomeChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmexcluir(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmexcluir *frmexcluir;
//---------------------------------------------------------------------------
#endif
