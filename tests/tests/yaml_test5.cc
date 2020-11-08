#include <iostream>
#include "/usr/local/include/yaml-cpp/yaml.h"

void print_yaml(const YAML::Node& node, int level) {
    if (node.IsScalar()) {
        std::cout << std::string(level * 4, ' ')
            << node.Scalar() << " - " << node.Type() << " - " << level;
    } else if (node.IsNull()) {
        std::cout << std::string(level * 4, ' ')
            << "NULL - " << node.Type() << " - " << level;
    } else if (node.IsMap()) {
        for (auto it = node.begin();
                it != node.end(); ++it) {
            std::cout << std::string(level * 4, ' ')
                << it->first << " - " << it->second.Type() << " - " << level;
            print_yaml(it->second, level + 1);
        }
    } else if (node.IsSequence()) {
        for (size_t i = 0; i < node.size(); ++i) {
            std::cout << std::string(level * 4, ' ')
                << i << " - " << node[i].Type() << " - " << level;
            print_yaml(node[i], level + 1);
        }
    }
}

void test_yaml() {
    YAML::Node root = YAML::LoadFile("/home/working/tests_c-c-/tests/config/log.yml");
    print_yaml(root, 0);

    std::cout << "######" << std::endl;
    std::cout << root << std::endl;
}

int main(int argc, char** argv) {

    test_yaml();

    return 0;
}
