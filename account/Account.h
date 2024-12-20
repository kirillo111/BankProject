//
// Created by student on 20.12.2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "../User.h"
#include <iostream>


using namespace std;

class Account {
private:
    string id;
    User applicant;
    string date;
    string status;

public:
    Account();

    Account(User applicant);

    string getId();

    string getStatus();

    void setStatus(string status);

    string getDate();

    User getApplicant();

    void show();
};


#endif //ACCOUNT_H
