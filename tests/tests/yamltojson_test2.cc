#include <iostream>
#include "/usr/local/include/yaml-cpp/yaml.h"
#include "/usr/local/include/json/json.h"

bool YamlToJson(const YAML::Node& ynode, Json::Value& jnode) {
    try {
        if(ynode.IsScalar()) {
            Json::Value v(ynode.Scalar());
            jnode.swapPayload(v);
            return true;
        }
        if(ynode.IsSequence()) {
            for(size_t i = 0; i < ynode.size(); ++i) {
                Json::Value v;
                if(convert_yaml_to_json(ynode[i], v)) {
                    jnode.append(v);
                } else {
                    return false;
                }
            }
        } else if(ynode.IsMap()) {
            for(auto it = ynode.begin();
                    it != ynode.end(); ++it) {
                Json::Value v;
                if(convert_yaml_to_json(it->second, v)) {
                    jnode[it->first.Scalar()] = v;
                } else {
                    return false;
                }
            }
        }
    } catch(...) {
        return false;
    }
    return true;
}

bool JsonToYaml(const Json::Value& jnode, YAML::Node& ynode) {
    try {
        if(jnode.isArray()) {
            for(int i = 0; i < jnode.size(); ++i) {
                YAML::Node n;
                if(convert_json_to_yaml(jnode[i], n)) {
                    ynode.push_back(n);
                } else {
                    return false;
                }
            }
        } else if(jnode.isObject()) {
            for(auto it = jnode.begin();
                    it != jnode.end();
                    ++it) {
                YAML::Node n;
                if(convert_json_to_yaml(*it, n)) {
                    ynode[it.name()] = n;
                } else {
                    return false;
                }
            }
        } else {
            ynode = jnode.asString();
        }
    } catch (...) {
        return false;
    }
    return true;
}

//将Json转成string
std::string JsonToString(const Json::Value& json) {
    Json::FastWriter w;
    return w.write(json);
}

int main(int argc, char** argv) {
    //加载yaml文件
    YAML::Node node = YAML::LoadFile("../config/config_test.yaml");
    Json::Value value;
    YamlToJson(node, value);
    std::cout << JsonToString(value) << std::endl;
    YAML::Node nnode;
    bool v = JsonToYaml(value, nnode);
    std::cout << " =========================== " << std::endl;
    std::cout << nnode << std::endl;
    std::cout << " ===========================" << std::endl;
    std::cout << node << std::endl;
    return 0;
}


