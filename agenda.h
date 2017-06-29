//---------------------------------------------------------------------------

#ifndef agendaH
#define agendaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <Buttons.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include "CCALENDR.h"
#include "CGAUGES.h"
#include <Menus.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class Tfrmagenda : public TForm
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TQuery *Qryexe;
        TDBGrid *DBGrid1;
        TTable *tbcontatos;
        TEdit *edtbusca;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Exit1;
        TMenuItem *N3;
        TMenuItem *Close1;
        TMenuItem *Open1;
        TMenuItem *New1;
        TMenuItem *File2;
        TMenuItem *Calendrio1;
        TMenuItem *Fecharcalendrio1;
        TComboBox *cboxpesquisar;
        TLabel *lblpesquisa;
        TLabel *lbltipo;
        TDatabase *Database1;
        TDBNavigator *DBNavigator1;
        TMenuItem *Ajuda1;
        TMenuItem *SobreoSoftware1;
        TMenuItem *Manual1;
        TDataSource *DataSource2;
        TBitBtn *brtcontato;
        TBitBtn *brtexcluir;
        TBitBtn *brtatual_contato;
        TBitBtn *brtatualizar;
        TImage *Image1;
        TMenuItem *Modoavanado1;
        TMenuItem *Modobsico1;
        TMenuItem *Cadastrarnovousurio1;
        void __fastcall Calendrio1Click(TObject *Sender);
        void __fastcall Fecharcalendrio1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall brtatualizarClick(TObject *Sender);
        void __fastcall brtcontatoClick(TObject *Sender);
        void __fastcall New1Click(TObject *Sender);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall brtexcluirClick(TObject *Sender);
        void __fastcall edtbuscaChange(TObject *Sender);
        void __fastcall cboxpesquisarChange(TObject *Sender);
        void __fastcall brtatual_contatoClick(TObject *Sender);
        void __fastcall SobreoSoftware1Click(TObject *Sender);
        void __fastcall Modobsico1Click(TObject *Sender);
        void __fastcall Modoavanado1Click(TObject *Sender);
        void __fastcall Manual1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Cadastrarnovousurio1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmagenda(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmagenda *frmagenda;
//---------------------------------------------------------------------------
#endif
