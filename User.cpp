//
// Created by student on 15.12.2024.
//

#include "User.h"

string User::getId() {
    return id;
}

string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPhone() {
    return phone;
}

string User::getRole() {
    return role;
}

string User::getUserType() {
    return userType;
}

void User::setId(string id) {
   this->id = id;
}

void User::setEmail(string email) {
    this->email = email;
}

void User::setName(string name) {
    this->name = name;
}

void User::setPhone(string phone) {
    this->phone = phone;
}

void User::setRole(string role) {
    this->role = role;
}
void User::setUserType(string userType) {
    this->userType = userType;
}
string User::getPassword() {
    return password;
}

void User::setPassword(string password) {
    this->password = password;
}

User::User() {

}

User::User(string id, string name, string email, string phone, string userType, string role) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->userType = userType;
    this->role = role;
}

