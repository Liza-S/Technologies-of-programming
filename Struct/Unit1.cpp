//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

struct Books {
	AnsiString nameAuthor, nameBook;
	int year, pages;
	double price;
	AnsiString ShowAll()
	{
		return nameAuthor + " | " + nameBook + " | " + IntToStr(year) + " | "+ IntToStr(pages) + " | " + FloatToStr(price);
    }
};

Books b[5];
int n = 0;

//Добавить книгу
void __fastcall TForm1::addBookClick(TObject *Sender)
{
	b[n].nameAuthor = Edit1->Text;
	b[n].nameBook = Edit2->Text;
	b[n].year = StrToInt(Edit3->Text);
	b[n].pages = StrToInt(Edit4->Text);
	b[n].price = StrToFloat(Edit5->Text);
	n++;
}
//---------------------------------------------------------------------------
// Информация о всех книгах
void __fastcall TForm1::infoClick(TObject *Sender)
{
	Memo1->Clear();
	for (int i = 0; i < n; i++) {
		Memo1->Lines->Add(b[i].ShowAll());
	}
}
//---------------------------------------------------------------------------

// Макс колво стр.
void __fastcall TForm1::maxButtonClick(TObject *Sender)
{
	Memo1->Clear();
	int maxPages, imax;
	maxPages = b[0].pages;
	imax = 0;
	for (int i = 1; i < n; i++) {
		if (b[i].pages > maxPages) {
			maxPages = b[i].pages;
			imax = i;
		}
	}
	Memo1->Lines->Add(b[imax].ShowAll());
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Memo1->Clear();
	double pageprice = 0;
	for (int i = 0; i < n; i++) {
		Memo1->Lines->Add(b[i].price / b[i].pages);
	}
}
//---------------------------------------------------------------------------

