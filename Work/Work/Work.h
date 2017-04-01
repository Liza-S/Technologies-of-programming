#pragma once

namespace Program
{
	// Параметры работы: количество часов работы и тариф оплаты за час работы
	// Общая стоимость работы 
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

