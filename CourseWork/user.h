#ifndef USER_H
#define USER_H
#include <iostream>
#include <fstream>
#include "workwithfile.h"

using namespace std;

class user: public WorkWithFile{

    std::string name = "";
    std::string password = "";
    bool access_mode = false;


public:
    user();

    user (std::string login, std::string password);

    bool SaveUser();

    bool GetMode();

    bool CheckUser();

    bool CheckUserForReg();

    friend bool operator == (const user user_1, const user user_2);
    friend bool operator != (const user user_1, const user user_2);
};

#endif // USER_H
