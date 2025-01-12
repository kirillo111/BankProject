#include <iostream>

#include "Registration.h"
#include "User.h"
#include "account/Account.h"
#include "bank/Bank.h"
#include <nlohmann/json.hpp>

using namespace std;

int main() {
    /*while (true) {

        cout << "Welcome to the Bank! " << endl;
        cout << "Choose what do you want to do \n1. Login\n2. Register ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                //Todo create login
                break;
            case 2:
                cout << "Enter your name: ";
                string name;
                cin >> name;

                cout << "Enter your email: ";
                string email;
                cin >> email;

                cout << "Enter your phone: ";
                string phone;
                cin >> phone;

                cout << "Enter your password: ";
                string password;
                cin >> password;

                Registration registration;
                string id = generate_uuid_v4();


                User user(id,name, email,phone,"client","admin");
                user.setPassword(password);

                registration.registerUser(user);

                break;

        }

        string key;
        cin >> key;
        if (key == "exit") {
            break;
        }
    }*/

    Bank bank("Privates", "Kiev");

    Account* userAccount = new Account(user);
    userAccount->show();
    bank.addAccount(userAccount);

    userAccount->addToBalance(200.0);
    userAccount->addToBalance(300.0);
    userAccount->addToBalance(-300.0);

    cout << "Balance: " << userAccount->getBalance() << endl;

    userAccount->minusFromBalance(250.0);
    userAccount->minusFromBalance(550.0);

    cout << "Balance: " << userAccount->getBalance() << endl;

    delete userAccount;
    delete user;


    Registration registration;
    registration.registerUser(user);
    registration.registerUser(user);

    bank.addAccount(account);
    bank.addAccount(account2);

    // bank.addAccount(account);
    // bank.addAccount(account2);
    //
    // User user2("Anna Karenina", "Karenina@com", "380391000003", "client", "admin");
    // Account* account3 = new Account(user2);
    //
    // User user3("Petya Ivanov", "Ivanov@com", "380391000004", "client", "manager");
    // Account* account4 = new Account(user3);
    // Account* account5 = new Account(user3);
    // Account* account6 = new Account(user3);
    //
    // User user4("Vasya Shotygonovich", "Shotygonovich@com", "380391000005", "client", "admin");
    // Account* account7 = new Account(user4);
    //
    // bank.addAccount(account3);
    // bank.addAccount(account4);
    // bank.addAccount(account5);
    // bank.addAccount(account6);
    // bank.addAccount(account7);
    //
    // account->setStatus("progress");
    // account2->setStatus("progress");
    // account7->setStatus("progress");
    //
    // bank.showAccounts();
    // bank.showFilteredAccountsByStatus("progress");

    return 0; // Деструктор `Bank` автоматично видалить акаунти

    return 0;
}
