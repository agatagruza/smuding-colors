//---------------------------------------------------------------------------

#ifndef Smugi_cppH
#define Smugi_cppH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "Rejestr.h"
//---------------------------------------------------------------------------
class TFSmugi : public TForm
{
__published:	// IDE-managed Components
        TTimer *TimerZegar;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall TimerZegarTimer(TObject *Sender);
        void __fastcall Smugi(TObject *Sender, TShiftState Shift,int X, int Y);
private:	// User declarations
        TShape *duch[400];
public:		// User declarations
        __fastcall TFSmugi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFSmugi *FSmugi;
//---------------------------------------------------------------------------
#endif
