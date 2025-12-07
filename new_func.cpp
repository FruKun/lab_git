#include <iostream>
#include <vector>
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

void print(std::vector<std::string> &list)
{
    return;
}
void write(std::string fileOutput, std::vector<std::string> &list)
{
    return;
}