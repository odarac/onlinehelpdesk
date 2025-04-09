#pragma once
#include <cstring>
#include <string>
#define SIZE 20

class RegisteredUser {
protected:
    int userID;
    char password[20];

public:
    RegisteredUser() {};
    RegisteredUser(int ID, char pw[]) {
        userID = ID;
        strcpy(password, pw);
    };
    int getUserID() {};
    char* getPassword() {};
    virtual void displayUniContactDetails() {};
    virtual void displayFAQ() {};
    virtual void searchFAQ(char keyword[]) {};
    ~RegisteredUser() {};
};
