//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <sstream>
#include <fstream.h>
#include <string.h>
#include <cstring>
#include <stdio.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int VertRes = Screen->Height;
int k;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

float priceamount ( string str)        //Функція пошуку Порогу
{int k=0;
stringstream ssa;
string buf1;
string rezult1;
 for (unsigned int i =0; i < str.length(); i++) {
 if (str[i]==';') {k++;}
 if (k==3 && str[i]!=';') {if (str[i]=='.'){str[i]=',';} ssa<<str[i]; ssa>>buf1; rezult1+=buf1; ssa.clear(); buf1.clear();}
 }
 return StrToFloat(rezult1.c_str());
 }
float crosbuy ( string str) //Функція пошуку ціни RACE COURSE BUY
{int k=0;
stringstream ssa;
string buf1;
string rezult1;
 for (unsigned int i =0; i < str.length(); i++) {
 if (str[i]==';') {k++;}
 if (k==6 && str[i]!=';') {if (str[i]=='.'){str[i]=',';} ssa<<str[i]; ssa>>buf1; rezult1+=buf1; ssa.clear(); buf1.clear(); }
 }
 return StrToFloat(rezult1.c_str());
 }
float crossell ( string str) //Функція пошуку ціни RACE COURSE SELL
{int k=0;
stringstream ssa;
string buf1;
string rezult1;
 for (unsigned int i =0; i < str.length(); i++) {
 if (str[i]==';') {k++;}
 if (k==7 && str[i]!=';') {if (str[i]=='.'){str[i]=',';} ssa<<str[i]; ssa>>buf1; rezult1+=buf1; ssa.clear(); buf1.clear();}
 }
 string rez;
 for(int i=0; i<3; i++){rez[i]=rezult1[i];}

 return StrToFloat(rez.c_str());
 }
int find (string buffer){   //ФУНКЦІЯ ПОШУКУ НАЙМЕНУВАННЯ ВАЛЮТИ
 int i=0;
 if (buffer.find("USD")==0 || buffer.find("USD")==1 || buffer.find("USD")==2 || buffer.find("USD")==3) {
 i=1;
 }
 else
 if (   (buffer[0]=='E')
	 && (buffer[1]=='U')
	 && (buffer[2]=='R')) {
 i=2;
 }
  else
 if (   (buffer[0]=='R')
	 && (buffer[1]=='U')
	 && (buffer[2]=='B')) {
 i=3;
 }
   else
 if (   (buffer[0]=='G')
	 && (buffer[1]=='B')
	 && (buffer[2]=='P')) {
 i=4;
 }
  else
 if (   (buffer[0]=='P')
	 && (buffer[1]=='L')
	 && (buffer[2]=='N')) {
  i=5;
  }

   else
 if (   (buffer[0]=='R')
	 && (buffer[1]=='O')
	 && (buffer[2]=='N')) {
  i=6;
  }

  else
 if (   (buffer[0]=='M')
	 && (buffer[1]=='D')
	 && (buffer[2]=='L')) {
  i=7;
  }

   else
 if (   (buffer[0]=='C')
	 && (buffer[1]=='A')
	 && (buffer[2]=='D')) {
  i=8;
  }


 return i;
 }
void sort(float arr[], int size)
{
	float tmp;

	for(int i = 0; i < size - 1; i++) // i - номер прохода
	{
		for(int j = 0; j < size - 1; j++) // внутренний цикл прохода
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

 }

 void sort1(float arr[], int size)
{
	float tmp;

	for(int i = 0; i < size - 1; i++) // i - номер прохода
	{
		for(int j = 0; j < size - 1; j++) // внутренний цикл прохода
		{
			if (arr[j + 1] > arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

 }
int arrayUnique(float *ar, int size) // функция, определяющая элементы массива в единственном экземпляре
{
    for (int counter1 = 0; counter1 < size; counter1++)
	{
		for (int counter2 = counter1 + 1; counter2 < size ; counter2++)
		{
			if ( ar[counter1] == ar[counter2]) // если найден одинаковый элемент
			{
				for (int counter_shift = counter2; counter_shift < size -1; counter_shift++)
				{
					// выполнить сдвиг всех остальных элементов массива на -1, начиная со следующего элемента, после найденного дубля
					ar[counter_shift] = ar[counter_shift + 1];
				}
				size -= 1; // уменьшить размер массива на 1

				if (ar[counter1] == ar[counter2]) // если следующий элемент - дубль
				{
				 counter2--; // выполнить переход на предыдущий элемент
				}
			}

		}
	}
	return size;
}

float code ( string str) //Функція пошуку ціни BUY
{int k=0;
stringstream ssa;
string buf1;
string rezult1;
 for (unsigned int i =0; i < str.length(); i++) {
 if (str[i]==';') {k++;}
 if (k==1 && str[i]!=';') {if (str[i]=='.'){str[i]=',';} ssa<<str[i]; ssa>>buf1; rezult1+=buf1; ssa.clear(); buf1.clear();}
 }
 return StrToFloat(rezult1.c_str());
 }


void __fastcall TForm2::FormCreate(TObject *Sender)
{k=1;

}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
if(Key==VK_ESCAPE)
{
exit(0);
}

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
						/////////////Мигання порогів цін///////////////

if(Label1->Visible == true) Label1->Visible = false;
else Label1->Visible = true;

if(Label2->Visible == true) Label2->Visible = false;
else Label2->Visible = true;


if(Label34->Visible == true) Label34->Visible = false;
else Label34->Visible = true;

if(Label35->Visible == true) Label35->Visible = false;
else Label35->Visible = true;

if(Label36->Visible == true) Label36->Visible = false;
else Label36->Visible = true;

if(Label37->Visible == true) Label37->Visible = false;
else Label37->Visible = true;

if(Label38->Visible == true) Label38->Visible = false;
else Label38->Visible = true;

if(Label39->Visible == true) Label39->Visible = false;
else Label39->Visible = true;

if(Label40->Visible == true) Label40->Visible = false;
else Label40->Visible = true;



if(Label58->Visible == true) Label58->Visible = false;
else Label58->Visible = true;

if(Label59->Visible == true) Label59->Visible = false;
else Label59->Visible = true;

if(Label60->Visible == true) Label60->Visible = false;
else Label60->Visible = true;

if(Label61->Visible == true) Label61->Visible = false;
else Label61->Visible = true;

if(Label62->Visible == true) Label62->Visible = false;
else Label62->Visible = true;

if(Label63->Visible == true) Label63->Visible = false;
else Label63->Visible = true;

if(Label64->Visible == true) Label64->Visible = false;
else Label64->Visible = true;
}

//---------------------------------------------------------------------------



void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
if (k==1)
		 {
		 AnimateWindow(Handle, 500, AW_ACTIVATE | AW_SLIDE | AW_VER_POSITIVE);
		k=2;}
else
if (k==2)
		 {
		 k=1;
		 AnimateWindow(Handle, 500, AW_HIDE | AW_SLIDE | AW_VER_POSITIVE);
		 }


}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormResize(TObject *Sender)
{
Label1->Font->Name="Times New Roman";
Label1->Font->Color=clBlack;
Label1->Font->Size=Form1->Height/20;

Label2->Font->Name="Times New Roman";
Label2->Font->Color=clRed;
Label2->Font->Size=Form1->Height/20;

Label3->Font->Name="Tw Cen MT Condensed Extra Bold";
Label3->Font->Color=clRed;
Label3->Font->Size=Form1->Height/15;


Label17->Font->Name="Times New Roman";
Label17->Font->Color=clBlack;
Label17->Font->Size=Form1->Height/20;

Label18->Font->Name="Times New Roman";
Label18->Font->Color=clRed;
Label18->Font->Size=Form1->Height/20;

Label33->Font->Name="Times New Roman";
Label33->Font->Color=clRed;
Label33->Font->Size=Form1->Height/20;

Label4->Font->Name="Tw Cen MT Condensed Extra Bold";
Label4->Font->Color=clRed;
Label4->Font->Size=Form1->Height/16;

Label5->Font->Name="Tw Cen MT Condensed Extra Bold";
Label5->Font->Color=clRed;
Label5->Font->Size=Form1->Height/16;

Label6->Font->Name="Tw Cen MT Condensed Extra Bold";
Label6->Font->Color=clRed;
Label6->Font->Size=Form1->Height/16;

Label7->Font->Name="Tw Cen MT Condensed Extra Bold";
Label7->Font->Color=clRed;
Label7->Font->Size=Form1->Height/16;

Label8->Font->Name="Tw Cen MT Condensed Extra Bold";
Label8->Font->Color=clRed;
Label8->Font->Size=Form1->Height/16;

Label9->Font->Name="Tw Cen MT Condensed Extra Bold";
Label9->Font->Color=clRed;
Label9->Font->Size=Form1->Height/16;

Label10->Font->Name="Tw Cen MT Condensed Extra Bold";
Label10->Font->Color=clRed;
Label10->Font->Size=Form1->Height/16;

Label11->Font->Name="Tw Cen MT Condensed Extra Bold";
Label11->Font->Color=clRed;
Label11->Font->Size=Form1->Height/16;

Label12->Font->Name="Tw Cen MT Condensed Extra Bold";
Label12->Font->Color=clRed;
Label12->Font->Size=Form1->Height/16;

Label13->Font->Name="Tw Cen MT Condensed Extra Bold";
Label13->Font->Color=clRed;
Label13->Font->Size=Form1->Height/16;

Label14->Font->Name="Tw Cen MT Condensed Extra Bold";
Label14->Font->Color=clRed;
Label14->Font->Size=Form1->Height/16;

Label15->Font->Name="Tw Cen MT Condensed Extra Bold";
Label15->Font->Color=clRed;
Label15->Font->Size=Form1->Height/16;

Label16->Font->Name="Tw Cen MT Condensed Extra Bold";
Label16->Font->Color=clRed;
Label16->Font->Size=Form1->Height/16;


Label19->Font->Name="Tw Cen MT Condensed Extra Bold";
Label19->Font->Color=clRed;
Label19->Font->Size=Form1->Height/16;

Label20->Font->Name="Tw Cen MT Condensed Extra Bold";
Label20->Font->Color=clRed;
Label20->Font->Size=Form1->Height/16;

Label21->Font->Name="Tw Cen MT Condensed Extra Bold";
Label21->Font->Color=clRed;
Label21->Font->Size=Form1->Height/16;

Label22->Font->Name="Tw Cen MT Condensed Extra Bold";
Label22->Font->Color=clRed;
Label22->Font->Size=Form1->Height/16;

Label23->Font->Name="Tw Cen MT Condensed Extra Bold";
Label23->Font->Color=clRed;
Label23->Font->Size=Form1->Height/16;

Label24->Font->Name="Tw Cen MT Condensed Extra Bold";
Label24->Font->Color=clRed;
Label24->Font->Size=Form1->Height/16;

Label25->Font->Name="Tw Cen MT Condensed Extra Bold";
Label25->Font->Color=clRed;
Label25->Font->Size=Form1->Height/16;

Label26->Font->Name="Tw Cen MT Condensed Extra Bold";
Label26->Font->Color=clRed;
Label26->Font->Size=Form1->Height/16;

Label27->Font->Name="Tw Cen MT Condensed Extra Bold";
Label27->Font->Color=clRed;
Label27->Font->Size=Form1->Height/16;

Label28->Font->Name="Tw Cen MT Condensed Extra Bold";
Label28->Font->Color=clRed;
Label28->Font->Size=Form1->Height/16;

Label29->Font->Name="Tw Cen MT Condensed Extra Bold";
Label29->Font->Color=clRed;
Label29->Font->Size=Form1->Height/16;

Label30->Font->Name="Tw Cen MT Condensed Extra Bold";
Label30->Font->Color=clRed;
Label30->Font->Size=Form1->Height/16;

Label31->Font->Name="Tw Cen MT Condensed Extra Bold";
Label31->Font->Color=clRed;
Label31->Font->Size=Form1->Height/16;

Label32->Font->Name="Tw Cen MT Condensed Extra Bold";
Label32->Font->Color=clRed;
Label32->Font->Size=Form1->Height/16;


Label43->Font->Name="Tw Cen MT Condensed Extra Bold";
Label43->Font->Color=clRed;
Label43->Font->Size=Form1->Height/16;

Label44->Font->Name="Tw Cen MT Condensed Extra Bold";
Label44->Font->Color=clRed;
Label44->Font->Size=Form1->Height/16;

Label45->Font->Name="Tw Cen MT Condensed Extra Bold";
Label45->Font->Color=clRed;
Label45->Font->Size=Form1->Height/16;

Label46->Font->Name="Tw Cen MT Condensed Extra Bold";
Label46->Font->Color=clRed;
Label46->Font->Size=Form1->Height/16;

Label47->Font->Name="Tw Cen MT Condensed Extra Bold";
Label47->Font->Color=clRed;
Label47->Font->Size=Form1->Height/16;

Label48->Font->Name="Tw Cen MT Condensed Extra Bold";
Label48->Font->Color=clRed;
Label48->Font->Size=Form1->Height/16;

Label49->Font->Name="Tw Cen MT Condensed Extra Bold";
Label49->Font->Color=clRed;
Label49->Font->Size=Form1->Height/16;

Label50->Font->Name="Tw Cen MT Condensed Extra Bold";
Label50->Font->Color=clRed;
Label50->Font->Size=Form1->Height/16;

Label51->Font->Name="Tw Cen MT Condensed Extra Bold";
Label51->Font->Color=clRed;
Label51->Font->Size=Form1->Height/16;

Label52->Font->Name="Tw Cen MT Condensed Extra Bold";
Label52->Font->Color=clRed;
Label52->Font->Size=Form1->Height/16;

Label53->Font->Name="Tw Cen MT Condensed Extra Bold";
Label53->Font->Color=clRed;
Label53->Font->Size=Form1->Height/16;

Label54->Font->Name="Tw Cen MT Condensed Extra Bold";
Label54->Font->Color=clRed;
Label54->Font->Size=Form1->Height/16;

Label55->Font->Name="Tw Cen MT Condensed Extra Bold";
Label55->Font->Color=clRed;
Label55->Font->Size=Form1->Height/16;

Label56->Font->Name="Tw Cen MT Condensed Extra Bold";
Label56->Font->Color=clRed;
Label56->Font->Size=Form1->Height/16;

////////////////////////////////////////////////////////////////////////////////
						  //Пороги знижок
////////////////////////////////////////////////////////////////////////////////


Label34->Font->Name="Tw Cen MT Condensed Extra Bold";
Label34->Font->Color=clWhite;


Label35->Font->Name="Tw Cen MT Condensed Extra Bold";
Label35->Font->Color=clWhite;

Label36->Font->Name="Tw Cen MT Condensed Extra Bold";
Label36->Font->Color=clWhite;


Label37->Font->Name="Tw Cen MT Condensed Extra Bold";
Label37->Font->Color=clWhite;


Label38->Font->Name="Tw Cen MT Condensed Extra Bold";
Label38->Font->Color=clWhite;


Label39->Font->Name="Tw Cen MT Condensed Extra Bold";
Label39->Font->Color=clWhite;


Label40->Font->Name="Tw Cen MT Condensed Extra Bold";
Label40->Font->Color=clWhite;



Label58->Font->Name="Tw Cen MT Condensed Extra Bold";
Label58->Font->Color=clWhite;


Label59->Font->Name="Tw Cen MT Condensed Extra Bold";
Label59->Font->Color=clWhite;

Label60->Font->Name="Tw Cen MT Condensed Extra Bold";
Label60->Font->Color=clWhite;


Label61->Font->Name="Tw Cen MT Condensed Extra Bold";
Label61->Font->Color=clWhite;


Label62->Font->Name="Tw Cen MT Condensed Extra Bold";
Label62->Font->Color=clWhite;


Label63->Font->Name="Tw Cen MT Condensed Extra Bold";
Label63->Font->Color=clWhite;


Label64->Font->Name="Tw Cen MT Condensed Extra Bold";
Label64->Font->Color=clWhite;
////////////////////////////////////////////////////////////////////////////////////////
							   //ЗВИЧАЙНІ ЦІНИ//
////////////////////////////////////////////////////////////////////////////////////////


 Label1->SetBounds(
	ClientWidth/2 - Label1->ClientWidth/2,
	ClientHeight/30 - Label1->ClientHeight/2,
	Label1->ClientWidth,
	Label1->ClientHeight
  );
   Label2->SetBounds(
	ClientWidth/2 - Label2->ClientWidth/2,
	ClientHeight/12 - Label2->ClientHeight/2,
	Label2->ClientWidth,
	Label2->ClientHeight
  );

   Label3->SetBounds(
	ClientWidth/110 - Label3->ClientWidth/2,
	ClientHeight/3.65 - Label3->ClientHeight/2,
	Label3->ClientWidth,
	Label3->ClientHeight
  );
  Label3->Font->Size=Form1->Height/16;


  Label17->SetBounds(
	ClientWidth/8 - Label17->ClientWidth/2,
	ClientHeight/7 - Label17->ClientHeight/2,
	Label17->ClientWidth,
	Label17->ClientHeight
  );
   Label18->SetBounds(
	ClientWidth/2 - Label18->ClientWidth/2,
	ClientHeight/7 - Label18->ClientHeight/2,
	Label18->ClientWidth,
	Label18->ClientHeight
  );

   Label33->SetBounds(
	ClientWidth/1.2 - Label33->ClientWidth/2,
	ClientHeight/7 - Label33->ClientHeight/2,
	Label33->ClientWidth,
	Label33->ClientHeight
  );

  Label4->SetBounds(
	ClientWidth/5.1 - Label4->ClientWidth/2,
	ClientHeight/3.7 - Label4->ClientHeight/2,
	Label4->ClientWidth,
	Label4->ClientHeight
  );
  Label4->Font->Size=Form1->Height/16;

   Label5->SetBounds(
	ClientWidth/110 - Label5->ClientWidth/2,
	ClientHeight/2.62 - Label5->ClientHeight/2,
	Label5->ClientWidth,
	Label5->ClientHeight
  );
  Label5->Font->Size=Form1->Height/16;

  Label6->SetBounds(
	ClientWidth/5.1 - Label6->ClientWidth/2,
	ClientHeight/2.62 - Label6->ClientHeight/2,
	Label6->ClientWidth,
	Label6->ClientHeight
  );
  Label6->Font->Size=Form1->Height/16;

  Label7->SetBounds(
	ClientWidth/110 - Label7->ClientWidth/2,
	ClientHeight/2.03 - Label7->ClientHeight/2,
	Label7->ClientWidth,
	Label7->ClientHeight
  );
  Label7->Font->Size=Form1->Height/16;

   Label8->SetBounds(
	ClientWidth/5.1 - Label8->ClientWidth/2,
	ClientHeight/2.03 - Label8->ClientHeight/2,
	Label8->ClientWidth,
	Label8->ClientHeight
  );
  Label8->Font->Size=Form1->Height/16;

   Label9->SetBounds(
	ClientWidth/110 - Label9->ClientWidth/2,
	ClientHeight/1.65 - Label9->ClientHeight/2,
	Label9->ClientWidth,
	Label9->ClientHeight
  );
  Label9->Font->Size=Form1->Height/16;

  Label10->SetBounds(
	ClientWidth/5.1 - Label10->ClientWidth/2,
	ClientHeight/1.65 - Label10->ClientHeight/2,
	Label10->ClientWidth,
	Label10->ClientHeight
  );
  Label10->Font->Size=Form1->Height/16;

  Label11->SetBounds(
	ClientWidth/110 - Label11->ClientWidth/2,
	ClientHeight/1.39 - Label11->ClientHeight/2,
	Label11->ClientWidth,
	Label11->ClientHeight
  );
  Label11->Font->Size=Form1->Height/16;

   Label12->SetBounds(
	ClientWidth/5.1 - Label12->ClientWidth/2,
	ClientHeight/1.39 - Label12->ClientHeight/2,
	Label12->ClientWidth,
	Label12->ClientHeight
  );
  Label12->Font->Size=Form1->Height/16;

   Label13->SetBounds(
	ClientWidth/110 - Label13->ClientWidth/2,
	ClientHeight/1.205 - Label13->ClientHeight/2,
	Label13->ClientWidth,
	Label13->ClientHeight
  );
  Label13->Font->Size=Form1->Height/16;

  Label14->SetBounds(
	ClientWidth/5.1 - Label14->ClientWidth/2,
	ClientHeight/1.205 - Label14->ClientHeight/2,
	Label14->ClientWidth,
	Label14->ClientHeight
  );
  Label14->Font->Size=Form1->Height/16;

  Label15->SetBounds(
	ClientWidth/110 - Label15->ClientWidth/2,
	ClientHeight/1.065 - Label15->ClientHeight/2,
	Label15->ClientWidth,
	Label15->ClientHeight
  );
  Label15->Font->Size=Form1->Height/16;

  Label16->SetBounds(
	ClientWidth/5.1 - Label16->ClientWidth/2,
	ClientHeight/1.065 - Label16->ClientHeight/2,
	Label16->ClientWidth,
	Label16->ClientHeight
  );
  Label16->Font->Size=Form1->Height/16;

////////////////////////////////////////////////////////////////////////////////////////
							   //СЕРЕДНІЙ ОПТ//
////////////////////////////////////////////////////////////////////////////////////////

  Label19->SetBounds(
	ClientWidth/2.9 - Label19->ClientWidth/2,
	ClientHeight/3.75 - Label19->ClientHeight/2,
	Label19->ClientWidth,
	Label19->ClientHeight
  );
  Label19->Font->Size=Form1->Height/16;

  Label20->SetBounds(
	ClientWidth/1.87 - Label20->ClientWidth/2,
	ClientHeight/3.75 - Label20->ClientHeight/2,
	Label20->ClientWidth,
	Label20->ClientHeight
  );
  Label20->Font->Size=Form1->Height/16;

  Label21->SetBounds(
	ClientWidth/2.9 - Label21->ClientWidth/2,
	ClientHeight/2.62 - Label21->ClientHeight/2,
	Label21->ClientWidth,
	Label21->ClientHeight
  );
  Label21->Font->Size=Form1->Height/16;

  Label22->SetBounds(
	ClientWidth/1.87 - Label22->ClientWidth/2,
	ClientHeight/2.62 - Label22->ClientHeight/2,
	Label22->ClientWidth,
	Label22->ClientHeight
  );
  Label22->Font->Size=Form1->Height/16;

	Label23->SetBounds(
	ClientWidth/2.9 - Label23->ClientWidth/2,
	ClientHeight/2.03 - Label23->ClientHeight/2,
	Label23->ClientWidth,
	Label23->ClientHeight
  );
  Label23->Font->Size=Form1->Height/16;

  Label24->SetBounds(
	ClientWidth/1.87 - Label24->ClientWidth/2,
	ClientHeight/2.03 - Label24->ClientHeight/2,
	Label24->ClientWidth,
	Label24->ClientHeight
  );
  Label24->Font->Size=Form1->Height/16;


	Label25->SetBounds(
	ClientWidth/2.9 - Label25->ClientWidth/2,
	ClientHeight/1.65 - Label25->ClientHeight/2,
	Label25->ClientWidth,
	Label25->ClientHeight
  );
  Label25->Font->Size=Form1->Height/16;

  Label26->SetBounds(
	ClientWidth/1.87 - Label26->ClientWidth/2,
	ClientHeight/1.65 - Label26->ClientHeight/2,
	Label26->ClientWidth,
	Label26->ClientHeight
  );
  Label26->Font->Size=Form1->Height/16;


	Label27->SetBounds(
	ClientWidth/2.9 - Label27->ClientWidth/2,
	ClientHeight/1.39 - Label27->ClientHeight/2,
	Label27->ClientWidth,
	Label27->ClientHeight
  );
  Label27->Font->Size=Form1->Height/16;

  Label28->SetBounds(
	ClientWidth/1.87 - Label28->ClientWidth/2,
	ClientHeight/1.39 - Label28->ClientHeight/2,
	Label28->ClientWidth,
	Label28->ClientHeight
  );
  Label28->Font->Size=Form1->Height/16;


	Label29->SetBounds(
	ClientWidth/2.9 - Label29->ClientWidth/2,
	ClientHeight/1.205 - Label29->ClientHeight/2,
	Label29->ClientWidth,
	Label29->ClientHeight
  );
  Label29->Font->Size=Form1->Height/16;

  Label30->SetBounds(
	ClientWidth/1.87 - Label30->ClientWidth/2,
	ClientHeight/1.205 - Label30->ClientHeight/2,
	Label30->ClientWidth,
	Label30->ClientHeight
  );
  Label30->Font->Size=Form1->Height/16;


	Label31->SetBounds(
	ClientWidth/2.9 - Label31->ClientWidth/2,
	ClientHeight/1.065 - Label31->ClientHeight/2,
	Label31->ClientWidth,
	Label31->ClientHeight
  );
  Label31->Font->Size=Form1->Height/16;

  Label32->SetBounds(
	ClientWidth/1.87 - Label32->ClientWidth/2,
	ClientHeight/1.065 - Label32->ClientHeight/2,
	Label32->ClientWidth,
	Label32->ClientHeight
  );
  Label32->Font->Size=Form1->Height/16;
 ///////////////////////////////////////////////////////////////////////////////////////
							   //Пороги знижок
 ///////////////////////////////////////////////////////////////////////////////////////
							   //Середній поріг

  Label34->SetBounds(
	ClientWidth/2.04 - Label34->ClientWidth/2,
	ClientHeight/3.6 - Label34->ClientHeight/2,
	Label34->ClientWidth,
	Label34->ClientHeight
  );
  Label34->Font->Size=Form1->Height/30;

  Label35->SetBounds(
	ClientWidth/2.04 - Label35->ClientWidth/2,
	ClientHeight/2.4 - Label35->ClientHeight/2,
	Label35->ClientWidth,
	Label35->ClientHeight
  );
  Label35->Font->Size=Form1->Height/30;

  Label36->SetBounds(
	ClientWidth/2.04 - Label36->ClientWidth/2,
	ClientHeight/1.9 - Label36->ClientHeight/2,
	Label36->ClientWidth,
	Label36->ClientHeight
  );
  Label36->Font->Size=Form1->Height/30;

  Label37->SetBounds(
	ClientWidth/2.04 - Label37->ClientWidth/2,
	ClientHeight/1.58 - Label37->ClientHeight/2,
	Label37->ClientWidth,
	Label37->ClientHeight
  );
  Label37->Font->Size=Form1->Height/30;

  Label38->SetBounds(
	ClientWidth/2.04 - Label38->ClientWidth/2,
	ClientHeight/1.34 - Label38->ClientHeight/2,
	Label38->ClientWidth,
	Label38->ClientHeight
  );
  Label38->Font->Size=Form1->Height/30;

	Label39->SetBounds(
	ClientWidth/2.04 - Label39->ClientWidth/2,
	ClientHeight/1.17 - Label39->ClientHeight/2,
	Label39->ClientWidth,
	Label39->ClientHeight
  );
  Label39->Font->Size=Form1->Height/30;

  Label40->SetBounds(
	ClientWidth/2.04 - Label40->ClientWidth/2,
	ClientHeight/1.04 - Label40->ClientHeight/2,
	Label40->ClientWidth,
	Label40->ClientHeight
  );
  Label40->Font->Size=Form1->Height/30;
								//Великий поріг
////////////////////////////////////////////////////////////////////////////////////////////////////

  Label58->SetBounds(
	ClientWidth/1.21 - Label58->ClientWidth/2,
	ClientHeight/3.6 - Label58->ClientHeight/2,
	Label58->ClientWidth,
	Label58->ClientHeight
  );
  Label58->Font->Size=Form1->Height/30;

  Label59->SetBounds(
	ClientWidth/1.21 - Label59->ClientWidth/2,
	ClientHeight/2.4 - Label59->ClientHeight/2,
	Label59->ClientWidth,
	Label59->ClientHeight
  );
  Label59->Font->Size=Form1->Height/30;

  Label60->SetBounds(
	ClientWidth/1.21 - Label60->ClientWidth/2,
	ClientHeight/1.9 - Label60->ClientHeight/2,
	Label60->ClientWidth,
	Label60->ClientHeight
  );
  Label60->Font->Size=Form1->Height/30;

  Label61->SetBounds(
	ClientWidth/1.21 - Label61->ClientWidth/2,
	ClientHeight/1.58 - Label61->ClientHeight/2,
	Label61->ClientWidth,
	Label61->ClientHeight
  );
  Label61->Font->Size=Form1->Height/30;

  Label62->SetBounds(
	ClientWidth/1.21 - Label62->ClientWidth/2,
	ClientHeight/1.34 - Label62->ClientHeight/2,
	Label62->ClientWidth,
	Label62->ClientHeight
  );
  Label62->Font->Size=Form1->Height/30;

	Label63->SetBounds(
	ClientWidth/1.21 - Label63->ClientWidth/2,
	ClientHeight/1.17 - Label63->ClientHeight/2,
	Label63->ClientWidth,
	Label63->ClientHeight
  );
  Label63->Font->Size=Form1->Height/30;

  Label64->SetBounds(
	ClientWidth/1.21 - Label64->ClientWidth/2,
	ClientHeight/1.04 - Label64->ClientHeight/2,
	Label64->ClientWidth,
	Label64->ClientHeight
  );
  Label64->Font->Size=Form1->Height/30;
////////////////////////////////////////////////////////////////////////////////////////
							   //Великий опт//
////////////////////////////////////////////////////////////////////////////////////////

  Label43->SetBounds(
	ClientWidth/1.46 - Label43->ClientWidth/2,
	ClientHeight/3.75 - Label43->ClientHeight/2,
	Label43->ClientWidth,
	Label43->ClientHeight
  );
  Label43->Font->Size=Form1->Height/16;

  Label44->SetBounds(
	ClientWidth/1.149 - Label44->ClientWidth/2,
	ClientHeight/3.75 - Label44->ClientHeight/2,
	Label44->ClientWidth,
	Label44->ClientHeight
  );
  Label44->Font->Size=Form1->Height/16;

  Label45->SetBounds(
	ClientWidth/1.46 - Label45->ClientWidth/2,
	ClientHeight/2.62 - Label45->ClientHeight/2,
	Label45->ClientWidth,
	Label45->ClientHeight
  );
  Label45->Font->Size=Form1->Height/16;

  Label46->SetBounds(
	ClientWidth/1.149 - Label46->ClientWidth/2,
	ClientHeight/2.62 - Label46->ClientHeight/2,
	Label46->ClientWidth,
	Label46->ClientHeight
  );
  Label46->Font->Size=Form1->Height/16;

	Label47->SetBounds(
	ClientWidth/1.46 - Label47->ClientWidth/2,
	ClientHeight/2.03 - Label47->ClientHeight/2,
	Label47->ClientWidth,
	Label47->ClientHeight
  );
  Label47->Font->Size=Form1->Height/16;

  Label48->SetBounds(
	ClientWidth/1.149 - Label48->ClientWidth/2,
	ClientHeight/2.03 - Label48->ClientHeight/2,
	Label48->ClientWidth,
	Label48->ClientHeight
  );
  Label48->Font->Size=Form1->Height/16;


	Label49->SetBounds(
	ClientWidth/1.46 - Label49->ClientWidth/2,
	ClientHeight/1.65 - Label49->ClientHeight/2,
	Label49->ClientWidth,
	Label49->ClientHeight
  );
  Label49->Font->Size=Form1->Height/16;

  Label50->SetBounds(
	ClientWidth/1.149 - Label50->ClientWidth/2,
	ClientHeight/1.65 - Label50->ClientHeight/2,
	Label50->ClientWidth,
	Label50->ClientHeight
  );
  Label50->Font->Size=Form1->Height/16;


	Label51->SetBounds(
	ClientWidth/1.46 - Label51->ClientWidth/2,
	ClientHeight/1.39 - Label51->ClientHeight/2,
	Label51->ClientWidth,
	Label51->ClientHeight
  );
  Label51->Font->Size=Form1->Height/16;

  Label52->SetBounds(
	ClientWidth/1.149 - Label52->ClientWidth/2,
	ClientHeight/1.39 - Label52->ClientHeight/2,
	Label52->ClientWidth,
	Label52->ClientHeight
  );
  Label52->Font->Size=Form1->Height/16;


	Label53->SetBounds(
	ClientWidth/1.46 - Label53->ClientWidth/2,
	ClientHeight/1.205 - Label53->ClientHeight/2,
	Label53->ClientWidth,
	Label53->ClientHeight
  );
  Label53->Font->Size=Form1->Height/16;

  Label54->SetBounds(
	ClientWidth/1.149 - Label54->ClientWidth/2,
	ClientHeight/1.205 - Label54->ClientHeight/2,
	Label54->ClientWidth,
	Label54->ClientHeight
  );
  Label54->Font->Size=Form1->Height/16;


	Label55->SetBounds(
	ClientWidth/1.46 - Label55->ClientWidth/2,
	ClientHeight/1.065 - Label55->ClientHeight/2,
	Label55->ClientWidth,
	Label55->ClientHeight
  );
  Label55->Font->Size=Form1->Height/16;

  Label56->SetBounds(
	ClientWidth/1.149 - Label56->ClientWidth/2,
	ClientHeight/1.065 - Label56->ClientHeight/2,
	Label56->ClientWidth,
	Label56->ClientHeight
  );
  Label56->Font->Size=Form1->Height/16;
////////////////////////////////////////////////////////////////////////////////////////
							   //АНІМАЦІЯ//
////////////////////////////////////////////////////////////////////////////////////////
  Image2->SetBounds(
	ClientWidth/17 - Image2->ClientWidth/2,
	ClientHeight/5 - Image2->ClientHeight/2,
	Image2->ClientWidth,
	Image2->ClientHeight
  );
   Image2->Transparent=false;
  Image2->Transparent=true;


  Image3->SetBounds(
	ClientWidth/4.2 - Image3->ClientWidth/2,
	ClientHeight/5 - Image3->ClientHeight/2,
	Image3->ClientWidth,
	Image3->ClientHeight
  );
  Image3->Transparent=false;
  Image3->Transparent=true;

  Image4->SetBounds(
	ClientWidth/2.65 - Image4->ClientWidth/2,
	ClientHeight/5 - Image4->ClientHeight/2,
	Image4->ClientWidth,
	Image4->ClientHeight
  );
  Image4->Transparent=false;
  Image4->Transparent=true;

  Image5->SetBounds(
	ClientWidth/1.76 - Image5->ClientWidth/2,
	ClientHeight/5 - Image5->ClientHeight/2,
	Image5->ClientWidth,
	Image5->ClientHeight
  );
  Image5->Transparent=false;
  Image5->Transparent=true;

  Image6->SetBounds(
	ClientWidth/1.4 - Image6->ClientWidth/2,
	ClientHeight/5 - Image6->ClientHeight/2,
	Image6->ClientWidth,
	Image6->ClientHeight
  );
  Image6->Transparent=false;
  Image6->Transparent=true;

  Image7->SetBounds(
	ClientWidth/1.11 - Image7->ClientWidth/2,
	ClientHeight/5 - Image7->ClientHeight/2,
	Image7->ClientWidth,
	Image7->ClientHeight
  );
  Image7->Transparent=false;
  Image7->Transparent=true;
/*dynamic_cast<TGIFImage *>(Image2->Picture->Graphic)->AnimateLoop = glEnabled;
dynamic_cast<TGIFImage *>(Image2->Picture->Graphic)->Animate = true;
dynamic_cast<TGIFImage *>(Image2->Picture->Graphic)->AnimationSpeed=100; */

TGIFImage *gif;
gif = new TGIFImage();
gif->LoadFromFile("10.gif");
gif->Animate = true;
gif->AnimationSpeed=150;
Image2->Picture->Graphic = gif;

TGIFImage *gif1;
gif1 = new TGIFImage();
gif1->LoadFromFile("11.gif");
gif1->Animate = true;
gif1->AnimationSpeed=150;
Image3->Picture->Graphic = gif1;

TGIFImage *gif2;
gif2 = new TGIFImage();
gif2->LoadFromFile("10.gif");
gif2->Animate = true;
gif2->AnimationSpeed=150;
Image4->Picture->Graphic = gif2;

  TGIFImage *gif3;
gif3 = new TGIFImage();
gif3->LoadFromFile("11.gif");
gif3->Animate = true;
gif3->AnimationSpeed=150;
Image5->Picture->Graphic = gif3;

TGIFImage *gif4;
gif4 = new TGIFImage();
gif4->LoadFromFile("10.gif");
gif4->Animate = true;
gif4->AnimationSpeed=150;
Image6->Picture->Graphic = gif4;

  TGIFImage *gif5;
gif5 = new TGIFImage();
gif5->LoadFromFile("11.gif");
gif5->Animate = true;
gif5->AnimationSpeed=150;
Image7->Picture->Graphic = gif5;


}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer3Timer(TObject *Sender)
{
float eurbuy[3];     float eursell[3];    float euramount[3];
float rubbuy[3];     float rubsell[3];    float rubamount[3];
float mdlbuy[3];     float mdlsell[3];    float mdlamount[3];
float ronbuy[3];     float ronsell[3];    float ronamount[3];
float gbpbuy[3];     float gbpsell[3];    float gbpamount[3];
float cadbuy[3];     float cadsell[3];    float cadamount[3];
float plnbuy[3];     float plnsell[3];    float plnamount[3];
   for (int i=0; i <=2; i++) {
   eurbuy[i]=0;
   eursell[i]=0;
   euramount[i]=0;
   rubbuy[i]=0;
   rubsell[i]=0;
   rubamount[i]=0;
   mdlbuy[i]=0;
   mdlsell[i]=0;
   mdlamount[i]=0;
   ronbuy[i]=0;
   ronsell[i]=0;
   ronamount[i]=0;
   gbpbuy[i]=0;
   gbpsell[i]=0;
   gbpamount[i]=0;
   cadbuy[i]=0;
   cadsell[i]=0;
   cadamount[i]=0;
   plnbuy[i]=0;
   plnsell[i]=0;
   plnamount[i]=0;
  }
 int countereur=0,
	 counterrub=0,
	 counterron=0,
	 countergbp=0,
	 countercad=0,
	 countermdl=0,
	 counterpln=0;
string buff;
buff.clear(); // буфер промежуточного хранения считываемого из файла текста;
ifstream file("info.txt"); // открыли файл для7 чтения
  //зчитуємо рядок файлу
while (!file.eof()){


  getline(file,buff);
 if ((find(buff)==2) && countereur!=3) {eurbuy[countereur]=crosbuy(buff); eursell[countereur]=crossell(buff); euramount[countereur]=priceamount(buff); countereur++;}
 else
 if ((find(buff)==3) && counterrub!=3) {rubbuy[counterrub]=crosbuy(buff); rubsell[counterrub]=crossell(buff); rubamount[counterrub]=priceamount(buff); counterrub++;}
 else
 if ((find(buff)==7) && countermdl!=3) {mdlbuy[countermdl]=crosbuy(buff); mdlsell[countermdl]=crossell(buff); mdlamount[countermdl]=priceamount(buff); countermdl++;}
 else
 if ((find(buff)==6) && counterron!=3) {ronbuy[counterron]=crosbuy(buff); ronsell[counterron]=crossell(buff); ronamount[counterron]=priceamount(buff); counterron++;}
 else
 if ((find(buff)==4) && countergbp!=3) {gbpbuy[countergbp]=crosbuy(buff); gbpsell[countergbp]=crossell(buff); gbpamount[countergbp]=priceamount(buff); countergbp++;}
 else
 if ((find(buff)==8) && countercad!=3) {cadbuy[countercad]=crosbuy(buff); cadsell[countercad]=crossell(buff); cadamount[countercad]=priceamount(buff); countercad++;}
 else
 if ((find(buff)==5) && counterpln!=3) {plnbuy[counterpln]=crosbuy(buff); plnsell[counterpln]=crossell(buff); plnamount[counterpln]=priceamount(buff); counterpln++;}


 buff.clear();
 }
file.close();


stringstream ss,ss1,ss2;
 // Вивід usdbuy usdsell

  for (int i=0; i<arrayUnique(eurbuy,3); i++) {
		if (eurbuy[i]!=0){
		ss<<eurbuy[i];
		ss1<<eursell[i];
		ss2<<euramount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){ Label3->Caption=s.c_str();Label4->Caption=s1.c_str();}
		if (i==1){Label19->Caption=s.c_str();Label20->Caption=s1.c_str();Label34->Caption=s2.c_str();}
		if (i==2){Label43->Caption=s.c_str();Label44->Caption=s1.c_str();Label58->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (eurbuy[i]==0){


		if (i==0){Label3->Caption="";Label4->Caption="";}
		if (i==1){Label19->Caption="";Label20->Caption="";Label34->Caption="";}
		if (i==2){Label43->Caption="";Label44->Caption="";Label58->Caption="";}


	   }

  }


  for (int i=0; i<arrayUnique(rubbuy,3); i++) {
		if (rubbuy[i]!=0){
		ss<<rubbuy[i];
		ss1<<rubsell[i];
		ss2<<rubamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label5->Caption=s.c_str();Label6->Caption=s1.c_str();}
		if (i==1){Label21->Caption=s.c_str();Label22->Caption=s1.c_str();Label35->Caption=s2.c_str();}
		if (i==2){Label45->Caption=s.c_str();Label46->Caption=s1.c_str();Label59->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (rubbuy[i]==0){


		if (i==0){Label5->Caption="";Label6->Caption="";}
		if (i==1){Label21->Caption="";Label22->Caption="";Label35->Caption="";}
		if (i==2){Label45->Caption="";Label46->Caption="";Label59->Caption="";}


	   }

  }

   for (int i=0; i<arrayUnique(mdlbuy,3); i++) {
		if (mdlbuy[i]!=0){
		ss<<mdlbuy[i];
		ss1<<mdlsell[i];
		ss2<<mdlamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label7->Caption=s.c_str();Label8->Caption=s1.c_str();}
		if (i==1){Label23->Caption=s.c_str();Label24->Caption=s1.c_str();Label36->Caption=s2.c_str();}
		if (i==2){Label47->Caption=s.c_str();Label48->Caption=s1.c_str();Label60->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (mdlbuy[i]==0){


		if (i==0){Label7->Caption="";Label8->Caption="";}
		if (i==1){Label23->Caption="";Label24->Caption="";Label36->Caption="";}
		if (i==2){Label47->Caption="";Label48->Caption="";Label60->Caption="";}


	   }

  }


   for (int i=0; i<arrayUnique(ronbuy,3); i++) {
		if (ronbuy[i]!=0){
		ss<<ronbuy[i];
		ss1<<ronsell[i];
		ss2<<ronamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label9->Caption=s.c_str();Label10->Caption=s1.c_str();}
		if (i==1){Label25->Caption=s.c_str();Label26->Caption=s1.c_str();Label37->Caption=s2.c_str();}
		if (i==2){Label49->Caption=s.c_str();Label50->Caption=s1.c_str();Label61->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (ronbuy[i]==0){


		if (i==0){Label9->Caption="";Label10->Caption="";}
		if (i==1){Label25->Caption="";Label26->Caption="";Label37->Caption="";}
		if (i==2){Label49->Caption="";Label50->Caption="";Label61->Caption="";}


	   }

  }

  for (int i=0; i<arrayUnique(gbpbuy,3); i++) {
		if (gbpbuy[i]!=0){
		ss<<gbpbuy[i];
		ss1<<gbpsell[i];
		ss2<<gbpamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label11->Caption=s.c_str();Label12->Caption=s1.c_str();}
		if (i==1){Label27->Caption=s.c_str();Label28->Caption=s1.c_str();Label38->Caption=s2.c_str();}
		if (i==2){Label51->Caption=s.c_str();Label52->Caption=s1.c_str();Label62->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (gbpbuy[i]==0){


		if (i==0){Label11->Caption="";Label12->Caption="";}
		if (i==1){Label27->Caption="";Label28->Caption="";Label38->Caption="";}
		if (i==2){Label51->Caption="";Label52->Caption="";Label62->Caption="";}


	   }

  }

  for (int i=0; i<arrayUnique(cadbuy,3); i++) {
		if (cadbuy[i]!=0){
		ss<<cadbuy[i];
		ss1<<cadsell[i];
		ss2<<cadamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label13->Caption=s.c_str();Label14->Caption=s1.c_str();}
		if (i==1){Label29->Caption=s.c_str();Label30->Caption=s1.c_str();Label39->Caption=s2.c_str();}
		if (i==2){Label53->Caption=s.c_str();Label54->Caption=s1.c_str();Label63->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (cadbuy[i]==0){


		if (i==0){Label13->Caption="";Label14->Caption="";}
		if (i==1){Label29->Caption="";Label30->Caption="";Label39->Caption="";}
		if (i==2){Label53->Caption="";Label54->Caption="";Label63->Caption="";}


	   }

  }

  for (int i=0; i<arrayUnique(plnbuy,3); i++) {
		if (plnbuy[i]!=0){
		ss<<plnbuy[i];
		ss1<<plnsell[i];
		ss2<<plnamount[i];
		string s;
		string s1;
		string s2;
		ss>>s;
		ss1>>s1;
		ss2>>s2;
		if (i==0){Label15->Caption=s.c_str();Label16->Caption=s1.c_str();}
		if (i==1){Label31->Caption=s.c_str();Label32->Caption=s1.c_str();Label40->Caption=s2.c_str();}
		if (i==2){Label55->Caption=s.c_str();Label56->Caption=s1.c_str();Label64->Caption=s2.c_str();}

		ss.clear(); s.clear();  ss1.clear(); s1.clear();   ss2.clear(); s2.clear();
	   }

		else if (plnbuy[i]==0){


		if (i==0){Label15->Caption="";Label16->Caption="";}
		if (i==1){Label31->Caption="";Label32->Caption="";Label40->Caption="";}
		if (i==2){Label55->Caption="";Label56->Caption="";Label64->Caption="";}


	   }

  }

}
//---------------------------------------------------------------------------

