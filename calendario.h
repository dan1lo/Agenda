//---------------------------------------------------------------------------

#ifndef calendarioH
#define calendarioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CCALENDR.h"
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tfrmcalendario : public TForm
{
__published:	// IDE-managed Components
        TCCalendar *calendario;
        TButton *brtfechar;
        void __fastcall brtfecharClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmcalendario(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmcalendario *frmcalendario;
//---------------------------------------------------------------------------
#endif
