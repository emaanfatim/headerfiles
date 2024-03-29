#pragma once

#include<iostream>
#include<string>
#include"teacherwise.h"

using namespace std;
class ClassSession2 :public ClassSession {
};

// Class to represent a day's timetable
class DayTimetable2 :public DayTimetable {

};

// Class to represent the entire weekly timetable for a section
class WeeklyTimetable2 :public WeeklyTimetable {
};

// Class to represent the timetable for all sections
class AllSectionsTimetable {
public:
    WeeklyTimetable bse2a, bse2b, bse4a, bse6a, bse8a, bseSpecial;

    void display() {
        cout << "BSE-2A Timetable:" << endl;
        bse2a.display();
        cout << endl;

        cout << "BSE-2B Timetable:" << endl;
        bse2b.display();
        cout << endl;

        cout << "BSE-4A Timetable:" << endl;
        bse4a.display();
        cout << endl;

        cout << "BSE-6A Timetable:" << endl;
        bse6a.display();
        cout << endl;

        cout << "BSE-8A Timetable:" << endl;
        bse8a.display();
        cout << endl;

    }
};