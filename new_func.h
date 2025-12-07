#ifndef __NEW_FUNC_H__
#define __NEW_FUNC_H__
#include <vector>
#include <string>
void read(std::string fileInput, std::vector<std::string> &list);
void print(std::vector<std::string> &list);
void write(std::string fileOutput, std::vector<std::string> &list);
#endif // __NEW_FUNC_H__