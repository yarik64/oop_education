// my_class.cpp

#include <iostream>

my_class::my_class()
{
    std::cout << "This is init constructor" << std::endl;
}


my_class::~my_class()
{
	std::cout << "This is destructor" << std::endl;
}


my_class::my_class(my_class&)
{
	std::cout << "This is copying constructor" << std::endl;
}


void my_class::print(char* str[])
{
	std:: cout << "SAY:" << str << std::endl;
}
