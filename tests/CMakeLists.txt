cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")

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

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)

