#include <iostream>
#include <string>
#include "/usr/local/include/yaml-cpp/yaml.h"

std::string toYamlString() {
    YAML::Node node;
    node["type"] = "StdoutLogAppender";
    node["level"] = "ERROR";
    node["formatter"] = "%d{%Y-%m-%d %H:%M:%S}%T%t%T%N%T%F%T[%p]%T[%c]%T%f:%l%T%m%n";

    std::stringstream ss;
    ss << node;
    return ss.str();
}

int main(int argc, char** argv) {
    std::cout << "toYamlString: " << toYamlString() << std::endl;

    return 0;
}
