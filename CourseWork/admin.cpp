#include "admin.h"

Admin::Admin()
{
}

bool Admin ::CheckMegaAdmin(int rang, int AdminRang)
{
   if (AdminRang > rang)
       return true;
   return false;
}
/*
bool Admin :: WriteToFile(std::string temp, std::string filename)
{
    bool result = true;
    ofstream outputFile;
    outputFile.open(filename, ios::app);
    if (!outputFile.is_open()){
        result = false;
    }else{

          outputFile<<temp<<" ";
    }
    return result;
}
*/
