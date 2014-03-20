//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Smugi_cpp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFSmugi *FSmugi;
//---------------------------------------------------------------------------
__fastcall TFSmugi::TFSmugi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFSmugi::Smugi(TObject *Sender, TShiftState Shift,int X, int Y)
{
                 dynamic_cast<TShape*>(Sender)->Brush->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TFSmugi::FormCreate(TObject *Sender)
{
                Nowy("Smugi","blvdgpdtwhuugbcglypgexqddsbuudpmmloptwrrppaloncvobmwpae");
                for(int i=0;i<20;i++)
                   for(int j=0;j<20;j++)
                   {
                      duch[20*i+j]=new TShape(this);
                      duch[20*i+j]->Parent=this;
                      duch[20*i+j]->Width=30;
                      duch[20*i+j]->Height=30;
                      duch[20*i+j]->Brush->Color=clBlack;
                      duch[20*i+j]->Pen->Color=clRed;
                      duch[20*i+j]->Left=30*i;
                      duch[20*i+j]->Top=30*j;
                      duch[20*i+j]->OnMouseMove=Smugi;
                   }
}
//---------------------------------------------------------------------------
void __fastcall TFSmugi::FormClose(TObject *Sender, TCloseAction &Action)
{
                for(int i=0;i<400;i++)
                   duch[i]->Free();
}
//---------------------------------------------------------------------------
void __fastcall TFSmugi::TimerZegarTimer(TObject *Sender)
{
                for(int i=0;i<400;i++)
                   if(duch[i]->Brush->Color!=clBlack)
                     duch[i]->Brush->Color*=4.0/5;
}
//---------------------------------------------------------------------------





