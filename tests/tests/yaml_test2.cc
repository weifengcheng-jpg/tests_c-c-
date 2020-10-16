#include <iostream>
#include <yaml-cpp/yaml.h>

typedef struct {
    int cpp;
    int java;
    int android;
    int python;
} Skills;

typedef struct {
    std::string name;
    std::string sex;
    int age;
    Skills skills;
} Config;

int test_base() {
    YAML::Node config;
    try {
        config = YAML::LoadFile("./config.yaml");
    } catch (YAML::BadFile& e) {
        std::cout << "read error" << std::endl;
        return -1;
    }

    std::cout << "Node type " << config.Type() << std::endl;
    std::cout << "skills type " << config["skills"].Type() << std::endl;

    //可以使用string类型作为下标, 读取参数
    std::string age = "age";
    std::cout << "age when string is label: " << config[age].as<int>() << std::endl;

    std::cout << "name: " << config["name"].as<std::string>() << std::endl;
    std::cout << "sex: " << config["sex"].as<std::string>() << std::endl;
    std::cout << "age: " << config["age"].as<int>() << std::endl;

    try {
        std::string label = config["label"].as<std::string>();
    } catch (YAML::TyedBadConversion<std::string>& e) {
        std::cout << "label node is NULL" << std::endl;
    }

    std::cout << "skills cpp: " << config["skills"]["cpp"].as<int>() << std::endl;
    std::cout << "skills java: " << config["skills"]["java"].as<int>() << std::endl;
    std::cout << "skills android: " << config["skills"]["android"].as<int>() << std::endl;
    std::cout << "skills python: " << config["skills"]["python"].as<int>() << std::endl;

    for (YAML::const_iterator it = config["skills"].begin(); it != config["skills"].end(); ++it) {
        std::cout << it->first.as<std::string>() << " : " << it->second.as<int>() << std::endl;
    } 

    YAML::Node test1 = YAML::Load("[1,2,3,4]");
    std::cout << " Type: " << test1.Type() << std::endl;

    YAML::Node test2 = YAML::Load("1");
    std::cout << "Type: " << test2.Type() << std::endl;

    YAML::Node test3 = YAML::Load("{'id':1,'degree':'senior'}");
    std::cout << "Type: " << test3.Type() << std::endl;

    ofstream fout("./testconfig.yaml");

    config["score"] = 99;
    
    fout << config;

    fout.close();

    return 0;
}


int main() {
    std::cout << "Hello world" << std::endl;
    return 0;
}

