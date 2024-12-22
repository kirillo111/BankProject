//
// Created by student on 20.12.2024.
//

#include "Bank.h"

vector<Account*> Bank::getAccounts() {
    return accounts;
}

string Bank::getAddress() {
    return address;
}


string Bank::getName() {
    return name;
}

Bank::Bank(string name, string address) {
    this->name = name;
    this->address = address;
}

string Bank::getId() {
    return id;
}

void Bank::addAccount(Account *account) {
    accounts.push_back(account);
}

void Bank::showAccounts() {
    for (int i = 0; i < accounts.size(); i++) {
        accounts[i]->show();
        cout << "*********************************" << endl;
    }
}
// Написати функцію, яка приймає ім'я і віддає тільки Акаунти Користувача з цим ім'ям
void Bank::showFilteredAccounts(string name) {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getApplicant().getName() == name) {
            accounts[i]->show();
            cout << "*********************************" << endl;
        }
    }
}

void Bank::showFilteredAccountsByStatus(string status) {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i]->getStatus() == status) {
            accounts[i]->show();
            cout << "*********************************" << endl;
        }
    }

}
