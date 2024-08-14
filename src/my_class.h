// my_class.h
#ifndef MY_CLASS_H
#define MY_CLASS_H

// #include <Strings.h>
#include "my_parent_class.h"


class my_class : my_parent_class {
	
	public:
		my_class();
		~my_class();
		my_class(my_class&);

		void prnt(char str[]);

	private:
//		int    field1;
//		String field2;
	
	
};

#endif
