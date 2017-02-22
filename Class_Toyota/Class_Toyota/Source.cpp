#include <iostream>
#include <conio.h>
#include "Goods.h"

using namespace std;

using Program::Goods;
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	Goods a("nod", 5000.00, "j");
	a.info();
	a.setpriceDollar();
	
	_getch();
	return 0;
}