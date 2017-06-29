//---------------------------------------------------------------------------

#ifndef manualH
#define manualH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tfrmmanual : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TBitBtn *brtsair;
        void __fastcall brtsairClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmmanual(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmmanual *frmmanual;
//---------------------------------------------------------------------------
#endif
