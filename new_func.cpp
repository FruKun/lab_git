#include "new_func.h"
#include <iostream>
#include <fstream>
void read(std::string fileInput, std::vector<std::string> &list)
{
    std::ifstream file(fileInput);
    if (!file.is_open())
    {
        std::cout << "file " << fileInput << " is not open\n";
        return;
    }
    std::string temp;
    while (!file.eof())
    {
        std::getline(file, temp);
        if (!file.fail())
            list.push_back(temp);
    }
    file.close();
    return;
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
