#pragma once
#include <cstring>
#include <string>
#define SIZE 20

#include "RegisteredUser.h"

//TechSupportStaff class is a sub class of RegisteredUser class
//Since TechSupportStaff are registered by the admin
//overloaded constructors are not implemented for the TechSupportUser class
class TechSupportStaff : public RegisteredUser {
protected:
    int techstaffID;
    char name[20];
    char phoneNo[10];
    char email[20];

public:
    TechSupportStaff() {};
    int getTechStaffID() {};
    void answerRequest() {};
    ~TechSupportStaff() {};
};
