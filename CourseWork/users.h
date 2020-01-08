#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <string>


class users{
           std::string name;
           std::string password;
           int access_mode;

        public: uers (std::string login, std::string password){
                this->name = login;
                this->password = password;
                this->access_mode = 0;
           }

           bool CheckUser(){
                bool Result = false;
                return Result;
           }

           bool SaveUser(){
               bool isNoError = true;
               return isNoError;
           }
        };

#endif // USERS_H
