#include <iostream>
#include "/usr/local/include/yaml-cpp/yaml.h" 

int main() {
    YAML::Node config = YAML::LoadFile("../config/");

    cout << "name: " << config["name"].as<std::string>() << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

