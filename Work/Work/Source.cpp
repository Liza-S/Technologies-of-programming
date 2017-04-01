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

	std::cout << "������� ����� ����������� �� ������: ";
	std::cin >> workHoursL;

	std::cout << "������� ����� �� ��� ������: ";
	std::cin >> payOneHourL;

	Work *work = new Work(workHoursL, payOneHourL);
	work->setWorkHours(workHoursL);
	work->setPayOneHour(payOneHourL);
	work->info();
	work->costWork();

	_getch();
	return 0;
}