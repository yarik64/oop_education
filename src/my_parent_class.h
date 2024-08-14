// my_parent_class.h

#ifndef MY_PARENT_CLASS_H
#define MY_PARENT_CLASS_H

// #include <Strings.h>


class my_parent_class {
	
	public:
		my_parent_class();
		~my_parent_class();
		my_parent_class(my_parent_class&);
	private:
		int    pfield1 = 100;
//		String field2;
	
	
};

#endif
