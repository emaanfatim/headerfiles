#pragma once
#include <iostream>
#include <string>
#include <vector>
#include"teacherwise.h"

class ClassSession3 :public ClassSession {

};

class Timetable3 {
private:
    static const int MAX_SESSIONS = 100; // Maximum number of sessions
    struct Session {
        string day;
        ClassSession session;
    };

    Session sessions[MAX_SESSIONS];
    int sessionCount;

public:
    Timetable3() : sessionCount(0) {}

    void addSession(const string& day, const ClassSession& session) {
        if (sessionCount < MAX_SESSIONS) {
            sessions[sessionCount].day = day;
            sessions[sessionCount].session = session;
            sessionCount++;
        }
        else {
            cout << "Timetable is full. Cannot add more sessions." << endl;
        }
    }

    void displaySessionsForRoomAndDay(const string& roomNumber, const string& day) {
        cout << "Sessions in Room/Lab " << roomNumber << " on " << day << ":" << endl;
        for (int i = 0; i < sessionCount; ++i) {
            if (sessions[i].session.room == roomNumber && sessions[i].day == day) {
                sessions[i].session.display();
            }
        }
    }
};
