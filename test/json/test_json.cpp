#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include <nlohmann/json.hpp>
#include <vector>
#include <string>
#include <fstream>

using json = nlohmann::json;

void savePropertiesToJson(const std::vector<std::pair<std::string, std::string>>& properties, const std::string& filename) {
    json j = json::array(); // 创建一个 JSON 数组

    for (const auto& [key, value] : properties) {
        j.push_back({{"key", key}, {"value", value}});
    }

    std::ofstream file(filename);
    if (file.is_open()) {
        file << j.dump(4); // 4 spaces for indentation
        file.close();
    } else {
        throw std::runtime_error("Unable to open file for writing");
    }
}

 
//----------------------------------------------------------
TEST_CASE("test json array", "[json]") {
 
    std::vector<std::pair<std::string, std::string>> properties = {
        {"key1", "value1"},
        {"key2", "value2"},
        {"key1", "value3"} // 重复的key
    };

    savePropertiesToJson(properties, "output.json");
 
}