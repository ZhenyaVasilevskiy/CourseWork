#include "user.h"


user::user(){

}

user::user (std::string login, std::string password){
     this->name = login;
     this->password = password;
}

bool user:: SaveUser(){
    bool result = true;
    ofstream outputFile;
    outputFile.open("Users.txt", ios::app);
    if (!outputFile.is_open()){
        result = false;
    }else{
          outputFile<<this->name<<" ";
          outputFile<<this->password<<" ";
          outputFile<<this->access_mode<<" ";
          outputFile.close();
    }
    return result;
}

bool user:: GetMode(){
    return this->access_mode;
}

bool user:: CheckUser(){
     user tempUser;
     ifstream InputFile;
     InputFile.open("Users.txt", ios::in);
     if (!InputFile.is_open()){
         return false;
     } else {
             while (!InputFile.eof()){
                    InputFile >>tempUser.name;
                    InputFile >>tempUser.password;
                    InputFile >>tempUser.access_mode;
                    if (tempUser == *this){
                             this->access_mode = tempUser.access_mode;
                             InputFile.close();
                             return true;
                    }
             }
     }
     InputFile.close();
     return false;
}

bool user:: CheckUserForReg(){
    user tempUser;
    ifstream InputFile;
    InputFile.open("Users.txt", ios::in);
    if (!InputFile.is_open()){
        return false;
    } else {
            while (!InputFile.eof()){
                   InputFile >>tempUser.name;
                   InputFile >>tempUser.password;
                   InputFile >>tempUser.access_mode;
                   if (tempUser.name == this->name){
                            InputFile.close();
                            return true;
                   }
            }
    }
    InputFile.close();
    return false;
}

bool operator == (const user user_1, const user user_2){
    if (user_1.name == user_2.name){
        if (user_1.password != user_2.password){
            return false;
        }
    }else{
        return false;
    }
    return true;
}

bool operator != (const user user_1, const user user_2){
    return !(user_1 == user_2);
}
