// OnlineHelpDesk.cpp : Defines the entry point for the application.
//

#include "OnlineHelpDesk.h"

using namespace std;

int main()
{
    Admin* sysAdmin = new Admin(468468, "fkwoe789#48");

    TechSupportStaff techstaff1;
    sysAdmin->registerTechStaff(techstaff1, 101, "Maya Gomez", "0753598789", "mayagomez@gmail.com");

    RegisteredUser user1;
    sysAdmin->deleteAcc(user1);

    StudentUser* student1 = new StudentUser("CS1002832", "Nina Perera", "0715634512");
    sysAdmin->authorizeAcc(*student1);

    StudentUser* student2 = new StudentUser("BS4687891", "Viraj Weerasinghe", "0754657211");
    student2->displayFAQ();
    student2->postForum();

    StaffUser* staff1 = new StaffUser("EECS102", "Dr. Sumal Silva", "0784532897");
    staff1->setFaculty("Faculty of Engineering");
    StaffUser* staff2 = new StaffUser("SS3243", "Janaka Fernando", "0716589472");
    staff2->setDesignation("Head of Extracurriculars");

    Query* qry1 = new Query(120891, student1);
    student1->postQuery(*qry1, "Public", "Starting a new club", "What forms do I need to fill and who should I send them to?");
    staff2->answerPublicQuery(*qry1);
    staff2->getDesignation();
    qry1->checkQueryOff();
    student2->displayQuery(*qry1);

    Query qry2(218902, staff1);
    qry2.getAnswerStatus();

    delete qry1;
    delete staff1;
    delete staff2;
    delete student1;
    delete student2;
    delete sysAdmin;
}
