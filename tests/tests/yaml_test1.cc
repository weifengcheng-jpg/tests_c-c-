#include <iostream>
#include <yaml-cpp/yaml.h>

int main() {
    YAML::Node config = YAML::LoadFile("../config/config.yaml");

    std::cout << "name: " << config["name"].as<string>() << std::endl;
    std::cout << "sex: " << config["sex"].as<string>() << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

