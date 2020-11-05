#include <iostream>
#include "/usr/local/include/json/json.h"
#include <memory>

void test1() {
    Json::Value root;
    root["name"] = "hello";
    root["age"] = 89;

    std::cout << root << std::endl;

}

/**
 * @brief 它不能解析的就会把内存数值以文本的方式显示出来
 * 不推荐使用
 */ 
void test2() {
    const char* str = R"(
        {
            "name" : "三国演义",
            "index" : 0
        }
    )";

    Json::Value root;

    Json::Reader reader;
    reader.parse(str, root);
    std::cout << root << std::endl;
}

void test3() {
    const char* str = R"(
        {
            "name" : "三国演义",
            "index" : 0
        }
    )";

    Json::Value root;

    Json::CharReaderBuilder reader_facter;
    std::unique_ptr<Json::CharReader> reader(reader_facter.newCharReader());
    reader->parse(str, str + strlen(str), &root, nullptr);
    std::cout << root << std::endl;
}

int main(int argc, char** argv) {
    test1();
    test2();
    test3();
     
    return 0;
}



