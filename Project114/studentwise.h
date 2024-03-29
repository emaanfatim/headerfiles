#pragma once
#pragma once


#include <iostream>
#include <string>
#include <vector>
#include"teacherwise.h"

class ClassSession4 :public ClassSession {
};

class Studentwisetimetable{
public:
    WeeklyTimetable Emaan, Madeiha, Ayesha, Iqra, Atqa;
void display() {
    cout << "Emaan's Timetable:" << endl;
    Emaan.display();
    cout << "*********" << endl;


    cout << "Madeiha 's Timetable:" << endl;
	Madeiha.display();
    cout << "***********" << endl;


    cout << " Ayesha  's Timetable:" << endl;
	Ayesha.display();
    cout << "**" << endl;


    cout << "Iqra 's Timetable:" << endl;
    Iqra.display();
    cout << "**" << endl;


    cout << "Atqa 's Timetable:" << endl;
    Atqa.display();
    cout << "**" << endl;


 }
};