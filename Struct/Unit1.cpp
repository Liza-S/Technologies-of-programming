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
	AnsiString ShowAll()
	{
		return nameAuthor + " | " + nameBook + " | " + IntToStr(year) + " | "+ IntToStr(pages);
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
	n++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::infoClick(TObject *Sender)
{
	Memo1->Clear();
	for (int i = 0; i < n; i++) {
        Memo1->Lines->Add(b[i].ShowAll());
	}
}
//---------------------------------------------------------------------------


