#include <iostream>
#include <conio.h>
#include "Work.h"

using namespace std;
using Program::Work;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	std::int16_t workHoursL;
	std::int16_t payOneHourL;

	std::cout << "Введите время потраченное на работу: ";
	std::cin >> workHoursL;

	std::cout << "Введите плату за час работы: ";
	std::cin >> payOneHourL;

	Work *work = new Work(workHoursL, payOneHourL);
	work->setWorkHours(workHoursL);
	work->setPayOneHour(payOneHourL);
	work->info();
	work->costWork();

	std::float_t income_taxL;
	cout << endl;
	std::cout << "Введите подоходный налог (в процентах): ";
	std::cin >> income_taxL;
	cout << "Подоходный налог: " << income_taxL << "%" << endl;


	_getch();
	return 0;
}