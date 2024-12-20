#include <iostream>

#include "Registration.h"
#include "User.h"
#include "account/Account.h"

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


    User user("Robert Jackson", "email@com","380391000002","client","admin");
    Account* account = new Account(user);

    account->show();


    delete account;

    return 0;
}
