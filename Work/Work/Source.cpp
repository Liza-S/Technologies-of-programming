#include <iostream>
#include <conio.h>
#include "Work.h"

using namespace std;
using Program::Work;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	std::int8_t workHoursL;
	std::int8_t payOneHourL;

	std::cout << "������� ����� ����������� �� ������: ";
	std::cin >> workHoursL;

	std::cout << "������� ����� �� ��� ������: ";
	std::cin >> payOneHourL;


	_getch();
	return 0;
}