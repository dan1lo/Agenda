//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tfrmlogin : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TBitBtn *brtok;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall brtokClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmlogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmlogin *frmlogin;
//---------------------------------------------------------------------------
#endif
