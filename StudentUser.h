#pragma once
#include <cstring>
#include <string>
#define SIZE 20

#include "RegisteredUser.h"

//StudentUser class is a sub class under RegisteredUser class
class StudentUser : public RegisteredUser {
protected:
    char studentID[10];
    char name[20];
    char phoneNo[10];
    char email[20];
    char faculty[20];
    Query* postedQueries[SIZE];

public:
    StudentUser() {};
    StudentUser(char sID[], char pname[], char phone[]) {
        strcpy(studentID, sID);
        strcpy(name, pname);
        strcpy(phoneNo, phone);
    };
    char* getStudentID() {};
    char* getPhoneNo() {};
    void setEmail(char pEmail[]) {};
    char* getEmail() {};
    void setFaculty(char pFaculty[]) {};
    char* getFaculty() {};
    void postQuery(Query qry, char type[], string subject, string description) {};
    void displayQuery(Query qry) {};
    void displayPreviousQueries() {};
    void postForum() {};
    void replyForum() {};
    void displayMaterial() {};
    ~StudentUser() {};
};
