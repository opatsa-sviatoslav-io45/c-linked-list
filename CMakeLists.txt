cmake_minimum_required(VERSION 4.2)

add_executable(main)

target_sources(main
	PRIVATE
		main.c
	PUBLIC
		FILE_SET local_headers
		TYPE HEADERS
		FILES
			llist.h

)

add_library(llist.a)

target_sources(llist.a
	PRIVATE
		llist.c
)

target_link_libraries(main llist.a)
