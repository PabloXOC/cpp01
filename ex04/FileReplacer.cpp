#include "FileReplacer.hpp"
#include <fstream>
#include <iostream>

bool FileReplacer::replaceInFile(const std::string& filename,
                                  const std::string& s1,
                                  const std::string& s2) {
    if (filename.empty() || s1.empty()) {
        std::cerr << "Error: Filename and s1 must not be empty." << std::endl;
        return false;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return false;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outFile(outputFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file." << std::endl;
        inFile.close();
        return false;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length(); // skip past the new inserted text
        }
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();
    return true;
}
