#include <iostream>
#include "/usr/local/include/yaml-cpp/yaml.h"

int main() {
    YAML::Node config = YAML::LoadFile("../config/config.yaml");

    std::cout << "name: " << config["name"].as<std::string>() << std::endl;
    std::cout << "sex: " << config["sex"].as<std::string>() << std::endl;
    std::cout << "age: " << config["age"].as<int>() << std::endl;

    std::cout << "skills c++: " << config["skills"]["c++"].as<int>() << std::endl;
    std::cout << "skills java: " << config["skills"]["java"].as<int>() << std::endl;

    for (YAML::const_iterator it = config["skills"].begin(); it != config["skills"].end(); ++it) {
        std::cout << it->first.as<std::string>() << " : " << it->second.as<int>() << std::endl;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

