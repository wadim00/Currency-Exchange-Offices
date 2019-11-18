//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <GIFImg.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TADOTable *ADOTable1;
	TADOQuery *ADOQuery1;
	TDBGrid *DBGrid1;
	TTimer *Timer1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label30;
	TLabel *Label31;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *Label38;
	TLabel *Label39;
	TLabel *Label40;
	TTimer *Timer2;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label43;
	TLabel *Label44;
	TLabel *Label45;
	TLabel *Label46;
	TLabel *Label47;
	TLabel *Label48;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label51;
	TLabel *Label52;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label55;
	TLabel *Label56;
	TLabel *Label57;
	TLabel *Label58;
	TLabel *Label59;
	TLabel *Label60;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TImage *Image6;
	TImage *Image7;
	TTimer *Timer3;
	TLabel *Label65;
	TLabel *Label66;
	TLabel *Label67;
	void __fastcall FormKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Label3DblClick(TObject *Sender);
	void __fastcall Label1DblClick(TObject *Sender);
	void __fastcall Label2DblClick(TObject *Sender);
	void __fastcall Label4DblClick(TObject *Sender);
	void __fastcall Label5DblClick(TObject *Sender);
	void __fastcall Label6DblClick(TObject *Sender);
	void __fastcall Label7DblClick(TObject *Sender);
	void __fastcall Label8DblClick(TObject *Sender);
	void __fastcall Label9DblClick(TObject *Sender);
	void __fastcall Label10DblClick(TObject *Sender);
	void __fastcall Label11DblClick(TObject *Sender);
	void __fastcall Label12DblClick(TObject *Sender);
	void __fastcall Label13DblClick(TObject *Sender);
	void __fastcall Label14DblClick(TObject *Sender);
	void __fastcall Label15DblClick(TObject *Sender);
	void __fastcall Label16DblClick(TObject *Sender);
	void __fastcall Label17DblClick(TObject *Sender);
	void __fastcall Label18DblClick(TObject *Sender);
	void __fastcall Label19DblClick(TObject *Sender);
	void __fastcall Label20DblClick(TObject *Sender);
	void __fastcall Label21DblClick(TObject *Sender);
	void __fastcall Label22DblClick(TObject *Sender);
	void __fastcall Label23DblClick(TObject *Sender);
	void __fastcall Label24DblClick(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
