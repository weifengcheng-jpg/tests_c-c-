#include <iostream>
#include "/usr/local/include/yaml-cpp/yaml.h"

int main() {
    YAML::Node config = YAML::LoadFile("../config/config.yaml");

    std::cout << "name: " << config["name"].as<std::string>() << std::endl;
    std::cout << "sex: " << config["sex"].as<std::string>() << std::endl;
    std::cout << "age: " << config["age"].as<std::string>() << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

