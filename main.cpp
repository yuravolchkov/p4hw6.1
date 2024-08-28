#include <iostream>
#include <string>
#include "Hash.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	std::string str_enter;
	
	for (; str_enter != "exit";)
	{
		std::cout << "Введите строку: ";
		std::cin >> str_enter;
		std::cout << "Наивный хэш строки "<< str_enter<< " = "<<simple_string_hash(str_enter)<<std::endl;
	}
	
	return 61;
}