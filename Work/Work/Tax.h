#pragma once
#include "Work.h"
namespace Program
{
	// �����  �  ���������� ����� � ���������
	// ���������, ������� ����� ������� ��������, ���� ������ ���������� �����
	class Tax : public Work
	{
	private:
		float income_tax;
	public:
		Tax();
		~Tax();
	};
}


