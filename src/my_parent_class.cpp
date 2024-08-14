// my_parent_class.cpp

#include "my_parent_class.h"
#include <iostream>

my_parent_class::my_parent_class()
{ std::cout << "This is parent init constructor" << std::endl; }

my_parent_class::~my_parent_class()
{ std::cout << "This is parent destructor" << std::endl; }

my_parent_class::my_parent_class(my_parent_class&)
{ std::cout << "This is parent copying constructor" << std::endl; }
