cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_VERBOSE_MAKEFILE ON)
#set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
#set(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")

set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c11 -Wall -Wno-deprecated -Wno-builtin-macro-redefined -Wno-deprecated-declarations")


#set(LIB_SRC sylar/log.cc)

#add_library(test_lib SHARED ${LIB_SRC})
#add_executable(log_format_test.exe tests/log_format_test.cc)
#target_link_libraries(1test.exe test_lib)

#set(LIB_SRC sylar/log.cc)

#add_library(test_lib SHARED ${LIB_SRC})
add_executable(strftime.exe ./tests/strftime_test.cc)
#target_link_libraries(1test.exe test_lib)

#set(LIB_SRC sylar/log.cc)

#add_library(test_lib SHARED ${LIB_SRC})
#add_executable(localtime_r.exe ./tests/localtime_r.cc)
#target_link_libraries(1test.exe test_lib)

#add_definitions(include)
#add_library(test_lib SHARED ${LIB_SRC})
#add_executable(yaml_test1.exe ./tests/yaml_test1.cc)
#target_link_libraries(yaml_test1.exe ${CMAKE_HOME_DIRECTORY}/lib64/libyaml-cpp.so)

include_directories(/usr/local/include)
link_directories(/usr/local/lib64)
add_executable(yaml_test3.exe tests/yaml_test3.cc)
target_link_libraries(yaml_test3.exe -L/usr/local/lib64 -lyaml-cpp)

add_executable(string_test1.exe tests/string_test1.cc)

add_executable(functional_test.exe tests/functional_test.cc )

add_executable(lambda_test.exe tests/lambda_test.cc)

add_executable(map_test.exe tests/map_test.cc )

include_directories(/usr/local/include/boost)
link_directories(/usr/local/lib)
add_executable(boot_test.exe ./tests/boot_test.cc )
target_link_libraries(boot_test.exe libboost_thread.so libboost_system.so)

add_executable(template_test1.exe ./tests/template_test1.cc )

add_executable(test2.exe ./tests/test2.cc )

include_directories(/usr/include/mysql/)
link_directories(/usr/lib64/mysql/libmysqlclient.so)
add_executable(connect_mysql.exe ./mysql/connect_mysql.cc )
target_link_libraries(connect_mysql.exe /usr/lib64/mysql/libmysqlclient.so)

add_executable(unordered_set.exe ./tests/unordered_set.cc )

add_executable(test4.exe ./tests/test4.cc )

add_executable(typeid_test1.exe ./tests/typeid_test1.cc )

add_executable(BinarySearch_test1.exe ./tests/BinarySearch_test1.cc )

add_executable(typename_test1.exe ./tests/typename_test1.cc )

add_executable(vector_test1.exe  ./tests/vector_test1.cc )

add_executable(vector_test2.exe ./tests/vector_test2.cc )

add_executable(vector_test3.exe ./tests/vector_test3.cc )

add_executable(array_test1.exe ./tests/array_test1.cc )

add_executable(sscanf_test1.exe ./tests/sscanf_test1.cc )

add_executable(transform_test1.exe ./tests/transfrom_test1.cc )

add_executable(coutBytes_test1.exe ./tests/coutBytes_test1.cc )

add_executable(map_test2.exe ./tests/map_test2.cc )

add_executable(set_test2.exe ./tests/set_test2.cc )

add_executable(__builtin_expect.exe ./tests/__builtin_expect.cc )

add_executable(assert.exe ./tests/assert.cc )

add_executable(backtrace.exe ./tests/backtrace.cc )

add_executable(backtrace_test2.exe ./tests/backtrace_test2.cc )

#add_executable(backtrace_test3.exe ./tests/backtrace_test3.cc )

#add_executable(singleton.exe ./tests/singleton.cc )

add_executable(singleton_test2.exe ./tests/singleton_test2.cc )

#add_executable(singleton_test3.exe ./tests/singleton_test3.cc )

add_executable(singleton_test4.exe ./tests/singleton_test4.cc )

add_executable(va_list_test2.exe ./tests/va_list_test2.cc)

add_executable(va_list_test4.exe ./tests/va_list_test4.cc )
















SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)

