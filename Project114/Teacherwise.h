#pragma once
#pragma once
#include<iostream>
#include<string>
using namespace  std;
class ClassSession {
public:
    string courseName;
    string instructor;
    string room;
    string timeStart;
    string timeEnd;
    string section;

    void display() {
        cout << timeStart << " - " << timeEnd << "\t" << courseName << "\t" << instructor << "\t" << room << "\t" << section << endl;
    }
    friend void displayTimetable(const string& day, const string& timestart);
};

// Class to represent a day's timetable
class DayTimetable {
public:
    ClassSession sessions[10];

    int sessionCount = 0;

    void addSession(ClassSession session) {
        sessions[sessionCount] = session;
        sessionCount++;
    }

    void display() {
        for (int i = 0; i < sessionCount; ++i) {
            sessions[i].display();
        }
    }
};

// Class to represent the entire weekly timetable for a section
class WeeklyTimetable {
public:
    DayTimetable monday, tuesday, wednesday, thursday, friday;

    void display() {
        cout << "Monday:" << endl;
        monday.display();
        cout << "Tuesday:" << endl;
        tuesday.display();
        cout << "Wednesday:" << endl;
        wednesday.display();
        cout << "Thursday:" << endl;
        thursday.display();
        cout << "Friday:" << endl;
        friday.display();
    }
};
// Class to represent the timetable for all sections
class Teacherstimetable {
public:
    WeeklyTimetable EngrSadaf, DrAwais, GulamQamar, DrTameem, EngrWaleed, MrZubair, SirRahimUllah, DrJoddat, DrAdeel, DrBaseer, EngrAmir, EngrRafia
        , EngrAleem, DrKashif, DrSohail, EngrAmin, EngrBilal;

    void display() {
        cout << "Mam Sadaf's Timetable:" << endl;
        EngrSadaf.display();
        cout << "**" << endl;


        cout << "Dr Awais's Timetable:" << endl;
        DrAwais.display();
        cout << "**" << endl;


        cout << " Gulam Qamar's Timetable:" << endl;
        GulamQamar.display();
        cout << "**" << endl;


        cout << "Dr.Tameem's Timetable:" << endl;
        DrTameem.display();
        cout << "**" << endl;


        cout << "Engr Waleed's Timetable:" << endl;
        EngrWaleed.display();
        cout << "**" << endl;


        cout << "Mr Zubair's Timetable:" << endl;
        MrZubair.display();
        cout << "**" << endl;


        cout << "Sir Rahimullah's Timetable:" << endl;
        SirRahimUllah.display();
        cout << "**" << endl;


        cout << "Dr Joddat's Timetable:" << endl;
        DrJoddat.display();
        cout << "**" << endl;


        cout << "Dr Adeel's Timetable" << endl;
        DrAdeel.display();
        cout << "**" << endl;

        cout << "Dr Baseer's Timetable'" << endl;
        DrBaseer.display();
        cout << "**" << endl;


        cout << "Engr Amir's Timetable" << endl;
        EngrAmir.display();
        cout << "**" << endl;


        cout << "Engr Rafia's Timetable" << endl;
        EngrRafia.display();
        cout << "**" << endl;


        cout << "Engr Aleem's Timetable" << endl;
        EngrAleem.display();
        cout << "**" << endl;


        cout << "Dr Sohail's Timetable" << endl;
        DrSohail.display();
        cout << "**" << endl;


        cout << "Engr Amin's Timetable" << endl;
        EngrAmin.display();
        cout << "**" << endl;

        cout << "Dr Kashif's Timetable" << endl;
        DrKashif.display();
        cout << "**" << endl;

    }
};

