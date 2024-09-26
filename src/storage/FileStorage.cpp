#include "FileStorage.h"
#include <fstream>
#include <sstream>

bool FileStorage::save(const std::vector<std::string> &data, const std::string &filename) {
    std::ofstream file(filename);
    if (!file.is_open()) return false;
    
    for (const auto &entry : data) {
        file << entry << "\n";
    }

    file.close();
    return true;
}

std::vector<std::string> FileStorage::load(const std::string &filename) {
    std::ifstream file(filename);
    std::vector<std::string> data;
    std::string line;
    
    while (std::getline(file, line)) {
        data.push_back(line);
    }

    return data;
}
