#include <iostream>
#include "new_func.h"

using namespace std;
int main()
{
    vector<string> list;
    string fileInput = "example.txt";
    string fileOutput = "output.txt";

    read(fileInput, list);
    print(list);
    write(fileOutput, list);

    return 0;
}
