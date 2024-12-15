#include <iostream>

#include "Registration.h"
#include "User.h"

using namespace std;

int main() {
    while (true) {

        User user;
        Registration registration;

        registration.registerUser(user);




        string key;
        cin >> key;
        if (key == "exit") {
            break;
        }
    }

    return 0;
}
