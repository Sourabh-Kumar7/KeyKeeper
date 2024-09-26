#ifndef FILESTORAGE_H
#define FILESTORAGE_H

#include <string>
#include <vector>

class FileStorage {
public:
    static bool save(const std::vector<std::string> &data, const std::string &filename);
    static std::vector<std::string> load(const std::string &filename);
};

#endif // FILESTORAGE_H
