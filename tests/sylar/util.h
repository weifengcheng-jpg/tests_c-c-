/**
 * @file util.h
 * @brief 常用的工具函数
 * @author sylar.yin
 * @email 564628276@qq.com
 * @date 2019-05-27
 * @copyright Copyright (c) 2019年 sylar.yin All rights reserved (www.sylar.top)
 */ 
#ifndef __SYLAR_UTIL_H__
#define __SYLAR_UTIL_H__

#include <cxxabi.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdint.h>
#include <vector>
#include <string>
#include <iomanip> 
#include "/usr/local/include/json/json.h"
#include "/usr/local/include/yaml-cpp/yaml.h"
#include <iostream>
#include "/usr/local/include/boost/lexical_cast.hpp"
#include "/usr/local/include/google/protobuf/message.h"


namespace sylar {

class FSUtil {
public:
    static void ListAllFile(std::vector<std::string>& files
                            ,const std::string& path
                            ,const std::string& subfix);
    static bool Mkdir(const std::string& dirname);
    static bool IsRunningPidfile(const std::string& pidfile);
    static bool Rm(const std::string& path);
    static bool Mv(const std::string& from, const std::string& to);
    static bool Realpath(const std::string& path, std::string& rpath);
    static bool Symlink(const std::string& frm, const std::string& to);
    static bool Unlink(const std::string& filename, bool exist = false);
    static std::string Dirname(const std::string& filename);
    static std::string Basename(const std::string& filename);
    static bool OpenForRead(std::ifstream& ifs, const std::string& filename
                    ,std::ios_base::openmode mode);
    static bool OpenForWrite(std::ofstream& ofs, const std::string& filename
                    ,std::ios_base::openmode mode);
};



}




#endif




