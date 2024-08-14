# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(ed_oop)

set(CXXFlAGS ${CXXFlAGS} -g3 -ggdb)
set(REQUIRES
		Core
		Widgets
)

set(SOURCE
	src/main.cpp

	src/my_class.cpp
	src/my_class.h

	src/my_parent_class.cpp
	src/my_parent_class.h

	#src/my_child_class.cpp
	#src/my_child_class.h
)

set(EXECTARGET ${PROJECT_NAME})
add_executable(${EXECTARGET} ${SOURCE})

foreach (REQ IN LISTS REQUIRES)
    find_package(Qt5 COMPONENTS ${REQ} REQUIRED)
    target_link_libraries(${EXECTARGET} PRIVATE Qt5::${REQ})
endforeach()


# cmake_install()
