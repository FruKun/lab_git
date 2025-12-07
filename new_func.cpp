#include "new_func.h"
#include <iostream>
#include <fstream>

void read(std::string fileInput, std::vector<std::string> &list) {
    std::ifstream inputFile(fileInput);

    if (!inputFile.is_open()) {
        std::cout << "file is not open" << fileInput << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        list.push_back(line);
    }

    inputFile.close();
}

void print(std::vector<std::string> &list) {
    for (size_t i = 0; i < list.size(); ++i) {
        std::cout << i + 1 << ". " << list[i] << std::endl;
    }
}

void write(std::string fileOutput, std::vector<std::string> &list) {
     std::ofstream outputFile(fileOutput);


    for (const auto& line : list) {
        outputFile << line << std::endl;
    }

    outputFile.close(); 
}
