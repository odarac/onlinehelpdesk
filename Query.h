#pragma once
#include <cstring>
#include <string>
#define SIZE 20

//Bi directional association exists between Query class and StudentUser class
class Query {
private:
    int queryID;
    StudentUser* queryPoster;
    char type[10];
    char timePosted[10];
    bool answerStatus;
    string subject;
    string description;

public:
    Query(int qID, StudentUser* poster) {
        queryID = qID;
        queryPoster = poster;
    };
    int getQueryID() {};
    char* getQueryType() {};
    string getQuerySubject() {};
    string getQueryDesc() {};
    StudentUser getQueryPoster() {};
    char* getTimePosted() {};
    bool getAnswerStatus() {};
    void checkQueryOff() {};
    ~Query() {};
};