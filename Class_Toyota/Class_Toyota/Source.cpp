#include <iostream>
#include <conio.h>
#include "Goods.h"

using namespace std;

using Program::Goods;
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	Goods a("Toyota", 200000.00, "Japan");
	a.info();
	a.setpriceDollar();
	a.increasePriceDollar();
	cout << endl;
	Goods b("BMV", 600000.00, "Germany");
	b.info();
	b.setpriceDollar();
	b.increasePriceDollar();
	cout << endl;

	Goods c("Porshe", 800000.00, "France");
	c.info();
	c.setpriceDollar();
	c.increasePriceDollar();
	
	_getch();
	return 0;
}