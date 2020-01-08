#ifndef WORKWITHFILE_H
#define WORKWITHFILE_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


class WorkWithFile
{
public:
    WorkWithFile();
    bool SaveFile(std::string filename, string name,string password,bool access_mode);

};

#endif // WORKWITHFILE_H
