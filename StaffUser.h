#pragma once
#include <cstring>
#include <string>
#define SIZE 20

#include "StudentUser.h"

//StaffUser class is a sub class of the StudentUser class 
//Multilevel inheritance exists between RegisteredUser, StudentUser and StaffUser classes
class StaffUser : public StudentUser {
protected:
    char staffID[10];
    char designation[20];

public:
    StaffUser(char sID[], char pname[], char phone[]) {
        strcpy(staffID, sID);
        strcpy(name, pname);
        strcpy(phoneNo, phone);
    }
    char* getStaffID() {};
    void setDesignation(char desig[]) {};
    char* getDesignation() {};
    void answerPublicQuery(Query qry) {};
    ~StaffUser() {};
};
