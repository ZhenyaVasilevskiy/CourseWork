#ifndef ADMIN_H
#define ADMIN_H
#include<iostream>
#include<fstream>
#include "workwithfile.h"
#include "user.h"
using namespace std;

class Admin : public user
{
        int rang;
    public:
        Admin();
        bool CheckMegaAdmin(int,int);
};

#endif // ADMIN_H
