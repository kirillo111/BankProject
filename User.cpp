//
// Created by student on 15.12.2024.
//

#include "User.h"
#include <nlohmann/json.hpp>

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

nlohmann::json User::toJson() const {
    return nlohmann::json{
        {"id",        id},
        {"name",      name},
        {"email",     email},
        {"phone",     phone},
        {"userType",  userType},
        {"role",      role},
        {"password",  password},
        {"created",   created}
    };
}

User::User() {

}

User::User( string name, string email, string phone, string userType, string role) {
    this->id = uuid::generate_uuid_v4();
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->userType = userType;
    this->role = role;
    DateUtil d = DateUtil();
    this->created = d.getDate();
}



