//
// Created by student on 15.12.2024.
//

#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "User.h"
#include <regex>
#include <iostream>


using namespace std;

class Registration {

public:
    void registerUser(User user);

private:
    bool validateEmail(string email);

    bool validatePhone(string phone);

    void saveToFile(User user);
};



#endif //REGISTRATION_H
