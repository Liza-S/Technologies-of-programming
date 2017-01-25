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