#include "User.hpp"

void User::CreateUser(const string& username, const string& password) {
    Username = username;
    this->password = password;
}

bool User::CheckUsername(const string& username) const {
    if (username.length() <= 8) {
        return false;
    }
    if (!isupper(username[0])) {
        return false;
    }
    return true;
}

bool User::CheckUser(const string& un2, const string& pas2, const vector<User>& v) {
    for (const User& user : v) {
        if (user.Username == un2 && user.password == pas2) {
            return true;
        }
    }
    return false;
}
