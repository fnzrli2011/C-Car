#include <iostream>
#include <vector>
#include "User.hpp"

using namespace std;

int main() {
    vector<User> users;
    User user;

    while (true) {
        cout << "Press 1 to create a user" << endl;
        cout << "Press 2 to log in" << endl;
        cout << "Press 3 to exit" << endl;
        cout << endl;

        int command;
        cout << "Command: ";
        cin >> command;
        cout << endl;

        if (command == 1) {
            bool isCreated = false;
            while (!isCreated) {
                cout << "Enter username (8 characters, starting with uppercase): ";
                string username;
                cin >> username;

                cout << "Enter password: ";
                string password;
                cin >> password;

                User newUser;
                newUser.CreateUser(username, password);

                if (newUser.CheckUsername(username)) {
                    users.push_back(newUser);
                    isCreated = true;
                    cout << "User " << username << " successfully created :)" << endl;
                    users.push_back(newUser);
                } else {
                    cout << "Username does not meet the requirements!" << endl;
                    cout << "Do you want to try again (Y)es / (N)o? " << endl;

                    string response;
                    cin >> response;

                    if (response == "N" || response == "n") {
                        cout << "User not created :(" << endl;
                        break;
                    }
                }
            }
            cout << endl;

        } else if (command == 2) {
            cout << "Enter Username: ";
            string un2;
            cin >> un2;

            cout << "Enter Password: ";
            string pas2;
            cin >> pas2;

            if (User::CheckUser(un2, pas2, users)) {
                cout << "Login completed successfully" << endl;
            } else {
                cout << "Login failed" << endl;
            }

            cout << endl;

        } else if (command == 3) {
            cout << "Exiting" << endl;
            return 0;

        } else {
            cout << "I cannot execute such a command!" << endl;
            cout << endl;
        }
    }

    return 0;
}
