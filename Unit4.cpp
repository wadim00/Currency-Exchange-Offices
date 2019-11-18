//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormResize(TObject *Sender)
{
Form4->Width=Form1->Width/2;
Image2->SetBounds(
	ClientWidth/5.0 - Image2->ClientWidth/2,
	ClientHeight/19 - Image2->ClientHeight/2,
	Image2->ClientWidth,
	Image2->ClientHeight
  );
  Image2->Transparent=false;
  Image2->Transparent=true;

  Image3->SetBounds(
	ClientWidth/1.26 - Image3->ClientWidth/2,
	ClientHeight/19 - Image3->ClientHeight/2,
	Image3->ClientWidth,
	Image3->ClientHeight
  );
  Image3->Transparent=false;
  Image3->Transparent=true;

TGIFImage *gif;
gif = new TGIFImage();
gif->LoadFromFile("10.gif");
gif->Animate = true;
gif->AnimationSpeed=110;
Image2->Picture->Graphic = gif;

TGIFImage *gif1;
gif1 = new TGIFImage();
gif1->LoadFromFile("11.gif");
gif1->Animate = true;
gif1->AnimationSpeed=110;
Image3->Picture->Graphic = gif1;

Label1->SetBounds(
	ClientWidth/2.0 - Label1->ClientWidth/2,
	ClientHeight/8 - Label1->ClientHeight/2,
	Label1->ClientWidth,
	Label1->ClientHeight
  );
  Label1->Font->Size=Form1->Height/16;

  Label2->SetBounds(
	ClientWidth/2.0 - Label2->ClientWidth/2,
	ClientHeight/5.2 - Label2->ClientHeight/2,
	Label2->ClientWidth,
	Label2->ClientHeight
  );
  Label2->Font->Size=Form1->Height/16;

  //////////////////////////////////////////////////////////////////////////
								//йпня йспях
  /////////////////////////////////////////////////////////////////////////
   Label3->SetBounds(
	ClientWidth/4.7 - Label3->ClientWidth/2,
	ClientHeight/3.75 - Label3->ClientHeight/2,
	Label3->ClientWidth,
	Label3->ClientHeight
  );
  Label3->Font->Size=Form1->Height/15;

  Label4->SetBounds(
	ClientWidth/1.27 - Label4->ClientWidth/2,
	ClientHeight/3.75 - Label4->ClientHeight/2,
	Label4->ClientWidth,
	Label4->ClientHeight
  );
  Label4->Font->Size=Form1->Height/15;

   Label5->SetBounds(
	ClientWidth/4.7 - Label5->ClientWidth/2,
	ClientHeight/2.62 - Label5->ClientHeight/2,
	Label5->ClientWidth,
	Label5->ClientHeight
  );
  Label5->Font->Size=Form1->Height/15;

  Label6->SetBounds(
	ClientWidth/1.27 - Label6->ClientWidth/2,
	ClientHeight/2.62 - Label6->ClientHeight/2,
	Label6->ClientWidth,
	Label6->ClientHeight
  );
  Label6->Font->Size=Form1->Height/15;

  Label7->SetBounds(
	ClientWidth/4.7 - Label7->ClientWidth/2,
	ClientHeight/2.03 - Label7->ClientHeight/2,
	Label7->ClientWidth,
	Label7->ClientHeight
  );
  Label7->Font->Size=Form1->Height/15;

   Label8->SetBounds(
	ClientWidth/1.27 - Label8->ClientWidth/2,
	ClientHeight/2.03 - Label8->ClientHeight/2,
	Label8->ClientWidth,
	Label8->ClientHeight
  );
  Label8->Font->Size=Form1->Height/15;

   Label9->SetBounds(
	ClientWidth/4.7 - Label9->ClientWidth/2,
	ClientHeight/1.65 - Label9->ClientHeight/2,
	Label9->ClientWidth,
	Label9->ClientHeight
  );
  Label9->Font->Size=Form1->Height/15;

  Label10->SetBounds(
	ClientWidth/1.27 - Label10->ClientWidth/2,
	ClientHeight/1.65 - Label10->ClientHeight/2,
	Label10->ClientWidth,
	Label10->ClientHeight
  );
  Label10->Font->Size=Form1->Height/15;

  Label11->SetBounds(
	ClientWidth/4.7 - Label11->ClientWidth/2,
	ClientHeight/1.39 - Label11->ClientHeight/2,
	Label11->ClientWidth,
	Label11->ClientHeight
  );
  Label11->Font->Size=Form1->Height/15;

   Label12->SetBounds(
	ClientWidth/1.27 - Label12->ClientWidth/2,
	ClientHeight/1.39 - Label12->ClientHeight/2,
	Label12->ClientWidth,
	Label12->ClientHeight
  );
  Label12->Font->Size=Form1->Height/15;

   Label13->SetBounds(
	ClientWidth/4.7 - Label13->ClientWidth/2,
	ClientHeight/1.205 - Label13->ClientHeight/2,
	Label13->ClientWidth,
	Label13->ClientHeight
  );
  Label13->Font->Size=Form1->Height/15;

  Label14->SetBounds(
	ClientWidth/1.27 - Label14->ClientWidth/2,
	ClientHeight/1.205 - Label14->ClientHeight/2,
	Label14->ClientWidth,
	Label14->ClientHeight
  );
  Label14->Font->Size=Form1->Height/15;

  Label15->SetBounds(
	ClientWidth/4.7 - Label15->ClientWidth/2,
	ClientHeight/1.065 - Label15->ClientHeight/2,
	Label15->ClientWidth,
	Label15->ClientHeight
  );
  Label15->Font->Size=Form1->Height/15;

  Label16->SetBounds(
	ClientWidth/1.27 - Label16->ClientWidth/2,
	ClientHeight/1.065 - Label16->ClientHeight/2,
	Label16->ClientWidth,
	Label16->ClientHeight
  );
  Label16->Font->Size=Form1->Height/15;







}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
Form4->SetBounds(Form1->Width+20,0,0,0);
Form4->Width=Form1->Width/2;

Label3->Font->Name="Tw Cen MT Condensed Extra Bold";
Label3->Font->Color=clRed;
Label3->Font->Size=Form1->Height/15;

Label4->Font->Name="Tw Cen MT Condensed Extra Bold";
Label4->Font->Color=clRed;
Label4->Font->Size=Form1->Height/15;

Label5->Font->Name="Tw Cen MT Condensed Extra Bold";
Label5->Font->Color=clRed;
Label5->Font->Size=Form1->Height/15;

Label6->Font->Name="Tw Cen MT Condensed Extra Bold";
Label6->Font->Color=clRed;
Label6->Font->Size=Form1->Height/15;

Label7->Font->Name="Tw Cen MT Condensed Extra Bold";
Label7->Font->Color=clRed;
Label7->Font->Size=Form1->Height/15;

Label8->Font->Name="Tw Cen MT Condensed Extra Bold";
Label8->Font->Color=clRed;
Label8->Font->Size=Form1->Height/15;

Label9->Font->Name="Tw Cen MT Condensed Extra Bold";
Label9->Font->Color=clRed;
Label9->Font->Size=Form1->Height/15;

Label10->Font->Name="Tw Cen MT Condensed Extra Bold";
Label10->Font->Color=clRed;
Label10->Font->Size=Form1->Height/15;

Label11->Font->Name="Tw Cen MT Condensed Extra Bold";
Label11->Font->Color=clRed;
Label11->Font->Size=Form1->Height/15;

Label12->Font->Name="Tw Cen MT Condensed Extra Bold";
Label12->Font->Color=clRed;
Label12->Font->Size=Form1->Height/15;

Label13->Font->Name="Tw Cen MT Condensed Extra Bold";
Label13->Font->Color=clRed;
Label13->Font->Size=Form1->Height/15;

Label14->Font->Name="Tw Cen MT Condensed Extra Bold";
Label14->Font->Color=clRed;
Label14->Font->Size=Form1->Height/15;

Label15->Font->Name="Tw Cen MT Condensed Extra Bold";
Label15->Font->Color=clRed;
Label15->Font->Size=Form1->Height/15;

Label16->Font->Name="Tw Cen MT Condensed Extra Bold";
Label16->Font->Color=clRed;
Label16->Font->Size=Form1->Height/15;


}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
if(Key==VK_ESCAPE)
{
exit(0);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
if(Label1->Visible == true) Label1->Visible = false;
else Label1->Visible = true;

if(Label2->Visible == true) Label2->Visible = false;
else Label2->Visible = true;
}
//---------------------------------------------------------------------------
