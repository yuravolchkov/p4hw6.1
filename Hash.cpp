#pragma once
#include <iostream>
#include <string>
#include "Hash.h"

int simple_string_hash(std::string str_for_hash)
{
	int hash = 0;
	for (int i = 0; i < str_for_hash.length(); i++)
	{
		hash += static_cast<int> (str_for_hash[i]);
	}
	return hash;
}