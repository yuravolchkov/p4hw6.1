#include <iostream>
#include <string>
#include "Hash.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����

	std::string str_enter;
	
	for (; str_enter != "exit";)
	{
		std::cout << "������� ������: ";
		std::cin >> str_enter;
		std::cout << "������� ��� ������ "<< str_enter<< " = "<<simple_string_hash(str_enter)<<std::endl;
	}
	
	return 61;
}