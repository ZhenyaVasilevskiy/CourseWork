#include "workwithfile.h"

WorkWithFile::WorkWithFile()
{
}

bool WorkWithFile:: SaveFile(std::string filename, string name,string password,bool access_mode){
    bool result = true;
    ofstream outputFile;
    outputFile.open(filename, ios::app);
    if (!outputFile.is_open()){
        result = false;
    }else{
          outputFile<<name<<" ";
          outputFile<<password<<" ";
          outputFile<<access_mode<<" ";
          outputFile.close();
    }
    return result;
}
