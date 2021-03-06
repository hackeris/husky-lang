//
// Created by rainm on 2021/3/6.
//

#ifndef HUSKY_LANG_FILE_H
#define HUSKY_LANG_FILE_H

#include <iostream>
#include <fstream>

inline std::string read_file(const std::string &filename) {
    std::ifstream infile(filename, std::ios::in | std::ios::binary);
    if (infile.is_open()) {
        return (std::string((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>()));
    }
    return "";
}

#endif //HUSKY_LANG_FILE_H
