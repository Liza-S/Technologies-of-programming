#pragma once

namespace Program
{
	// ��������� ������: ���������� ����� ������ � ����� ������ �� ��� ������
	// ����� ��������� ������ 
	class Work
	{
	private:
		int work_hours;
		int const pay_work_hour = 30;
	public:
		Work();
		~Work();
	};
}

