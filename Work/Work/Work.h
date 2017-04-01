#pragma once

namespace Program
{
	// ��������� ������: ���������� ����� ������ � ����� ������ �� ��� ������
	// ����� ��������� ������ 
	class Work
	{
	private:
		int workHours;
		int payOneHour;
	public:
		Work();
		Work(int, int);
		void setWorkHours(int);
		int getWorkHours();
		void setPayOneHour(int);
		int getPayOneHour();
		void info();

		// ����� ��������� ������
		void costWork();
		~Work();
	};
}

