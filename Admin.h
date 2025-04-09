#pragma once
#include <cstring>
#include <string>
#define SIZE 20

#include "Query.h"
#include "RegisteredUser.h"
#include "TechSupportStaff.h"

//Admin depends on Query, RegisteredUser and TechSupportStaff classes
class Admin {
private:
    int adminID;
    char adminPW[12];

public:
    Admin(int id, char pw[]) {
        adminID = id;
        strcpy(adminPW, pw);
    };
    void authorizeAcc(RegisteredUser acc) {};
    void displayQuery(Query qry) {};
    void answerQuery(Query qry) {};
    void shareQuery(Query qry) {};
    void registerTechStaff(TechSupportStaff techst, int techstID, char name[], char phone[], char email[]) {};
    void deleteAcc(RegisteredUser acc) {};
    void editFAQ() {};
    void deleteQuery(Query qry) {};
    ~Admin() {};
};

