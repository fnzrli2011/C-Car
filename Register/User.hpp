#ifndef USER_HPP_INCLUDED
#define USER_HPP_INCLUDED

#include <string>
#include <vector>

using namespace std;

class User {
public:
    string Username;
    string password;

    void CreateUser(const string& Username, const string& password);
    bool CheckUsername(const string& Username) const;
    static bool CheckUser(const string& un2, const string& pas2, const vector<User>& v);
};

#endif // USER_HPP_INCLUDED
