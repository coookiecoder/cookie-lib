cmake_minimum_required(VERSION 3.28)
project(cookie_lib)

set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} -g3)

include_directories(include)

add_library(cookie_lib_string
        sources/string/putstr.c
        sources/string/putchar.c
        sources/string/strcmp.c
        sources/string/strlen.c
        sources/string/strdup.c
        sources/string/strchr.c
        sources/string/strmove.c
        sources/string/strcopy.c
        sources/string/strjoin.c
        sources/string/strcat.c
        sources/string/strcspn.c
        sources/string/strpbrk.c
        sources/string/strstr.c
)

add_library(cookie_lib_cookie_string
        sources/cookie_string/converter.c
        sources/cookie_string/strcmp.c
        sources/cookie_string/strlen.c
        sources/cookie_string/strdup.c
)

add_library(cookie_lib_memory
        sources/memory/malloc.c
        sources/memory/calloc.c
        sources/memory/memchr.c
        sources/memory/memcmp.c
        sources/memory/memset.c
        sources/memory/memmove.c
        sources/memory/memdup.c
        sources/memory/memcopy.c
        sources/memory/memory_manager.c
        sources/memory/free.c
)

add_library(cookie_lib STATIC 
		$<TARGET_OBJECTS:cookie_lib_string>
		$<TARGET_OBJECTS:cookie_lib_cookie_string>
		$<TARGET_OBJECTS:cookie_lib_memory>
)

set(CMAKE_CXX_STANDARD 23)

