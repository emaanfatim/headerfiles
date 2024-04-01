#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include"teacherwise.h"
#include"Sectionwise.h"
#include"Roomwise.h"
#include"Query.h"
#include"studentwise.h"

using namespace std;

int main() {

    Teacherstimetable allTeachersTimetable;
    AllSectionsTimetable allSectionsTimetable;
    Timetable3 timetable;
    Studentwisetimetable timetable2;

    // Monday
    //For teachers
    allTeachersTimetable.EngrSadaf.monday.addSession({ "DS", "Engr. Sadaf", "Room 4-18", "09:30", "10:15", "BSE-2A" });
    allTeachersTimetable.EngrSadaf.monday.addSession({ "DAA", "Engr.Sadaf", "Room 4-18", "11:45", "1:15", "BSE-4A" });
    allTeachersTimetable.DrAwais.monday.addSession({ "ISE", "Dr.Awais", "Room 4-17", "8:00", "8:45", "BSE-2B" });
    allTeachersTimetable.DrAwais.monday.addSession({ "ISE", "Dr.Awais", "Room 4-18", "10:15", "11:45", "BSE-2A" });
    allTeachersTimetable.DrTameem.monday.addSession({ "OOP", "Dr.Tameem", "Room 4-19", "10:15", "11:45", "BSE-2B" });
    allTeachersTimetable.MrZubair.monday.addSession({ "LA", "Mr.Zubair", "Room 4-19", "1:15", "2:00", "BSE-2B" });
    allTeachersTimetable.DrJoddat.monday.addSession({ "DBMS", "Dr.Joddat", "Room 4-17", "9:30", "11:00", "BSE-4A" });
    allTeachersTimetable.DrJoddat.monday.addSession({ "HCI", "Dr.Joddat", "Room 4-17", "11:00", "12:30", "BSE-6A" });
    allTeachersTimetable.DrJoddat.monday.addSession({ "CP Special", " Dr.Joddat", "Room 4-18", "1:15", "2:00", "BSE-0(S)" });
    allTeachersTimetable.DrAdeel.monday.addSession({ "CC", "Dr.Adeel", "Room 4-18", "8:00", "9:30", "BSE-6A" });
    allTeachersTimetable.DrBaseer.monday.addSession({ "TRW", "Dr.Baseer", "Room 4-17", "12:30", "1:15", "BSE-6A" });
    allTeachersTimetable.EngrAmir.monday.addSession({ "DSA Lab", "Engr.Amir", "Lab 4-01", "11:00", "1:15", "BSE-0S" });
    allTeachersTimetable.EngrAleem.monday.addSession({ "DSA Special", "Engr.Aleem", "Room 4-18", "2:00", "2:45", "BSE-0S" });
    allTeachersTimetable.GulamQamar.monday.addSession({ "---------------------------------", "", "", "", "", "" }); // This line was already there, no modification needed
    allTeachersTimetable.EngrWaleed.monday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.SirRahimUllah.monday.addSession({ "------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrRafia.monday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrKashif.monday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrSohail.monday.addSession({ "---------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrAmin.monday.addSession({ "------------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrBilal.monday.addSession({ "-------------------------------------", "", "", "", "", "" });

    // Tuesday
    allTeachersTimetable.EngrSadaf.tuesday.addSession({ "DS", "Engr. Sadaf", "Room 4-19", "08:45", "10:15", "BSE-2A" });
    allTeachersTimetable.EngrSadaf.tuesday.addSession({ "DS", "Engr.Sadaf", "Room 4-17", "11:00", "11:45", "BSE-2B" });
    allTeachersTimetable.DrAwais.tuesday.addSession({ "ISE", "Dr.Awais", "Room 4-18", "10:15", "11:00", "BSE-2A" });
    allTeachersTimetable.DrAwais.tuesday.addSession({ "ISE", "Dr.Awais", "Room 4-18", "9:30", "10:15", "BSE-2B" });
    allTeachersTimetable.DrAwais.tuesday.addSession({ "SDA", "Dr.Awais", "Room 4-17", " 11:45", "1:15", "BSE-4A" });
    allTeachersTimetable.DrTameem.tuesday.addSession({ "OOP", "Dr.Tameem", "Room 4-19", "10:15", "11:00", "BSE-2B" });
    allTeachersTimetable.DrTameem.tuesday.addSession({ "SQE", "Dr.Tameem", "Room 4-18", "08:00", "09:30", "BSE-6A" });
    allTeachersTimetable.MrZubair.tuesday.addSession({ "LA", "Mr.Zubair", "Room 4-19", "12:30", "2:00", "BSE-2B" });
    allTeachersTimetable.EngrWaleed.tuesday.addSession({ "DBMS Lab", "Engr Waleed", "Lab 4-01", "8:00", "10:15", "BSE-4A" });
    allTeachersTimetable.DrJoddat.tuesday.addSession({ "DBMS", "Dr.Joddat", "Room 4-17", "10:15", "11:00", "BSE-4A" });
    allTeachersTimetable.DrJoddat.tuesday.addSession({ "HCI", "Dr.Joddat", "Room 4-17", "09:30", "10:15", "BSE-6A" });
    allTeachersTimetable.DrJoddat.tuesday.addSession({ "CP Special", "Dr.Joddat", "Room 4-18", "1:15", "2:00", "BSE-0(S)" });
    allTeachersTimetable.EngrBilal.tuesday.addSession({ "EM", "Engr.Bilal", "Room 4-18", "11:00", "11:45", "BSE-4A" });
    allTeachersTimetable.DrBaseer.tuesday.addSession({ "TRW", "Dr.Baseer", "Room 4-18", "12:30", "2:00", "BSE-6A" });
    allTeachersTimetable.EngrAmir.tuesday.addSession({ "CC Lab", "Engr.Amir", "Lab 4-02", "10:15", "12:30", "BSE-6A" });
    allTeachersTimetable.GulamQamar.tuesday.addSession({ "----------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.SirRahimUllah.tuesday.addSession({ "------------------------------ ", "", "", "", "", "" });
    allTeachersTimetable.DrAdeel.tuesday.addSession({ "------------------------------ ", "", "", "", "", "" });
    allTeachersTimetable.EngrRafia.tuesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrAleem.tuesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrKashif.tuesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrSohail.tuesday.addSession({ "---------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrAmin.tuesday.addSession({ "------------------------------------", "", "", "", "", "" });


    // Wednesday
    allTeachersTimetable.GulamQamar.wednesday.addSession({ "ECS", "Gulam Qamar", "Room 4-17", "8:00", "9:30", "BSE-2A" });
    allTeachersTimetable.GulamQamar.wednesday.addSession({ "ECS", "Gulam Qamar", "Room 4-17", "9:30", "11:00", "BSE-2B" });
    allTeachersTimetable.SirRahimUllah.wednesday.addSession({ "IS", "Sir.Rahim", "Room 4-19", "12:30", "2:00", "BSE-2B" });
    allTeachersTimetable.DrSohail.wednesday.addSession({ "OR", "Dr.Sohail", "Room 4-19", "8:00", "9:30", "BSE-8A" });
    allTeachersTimetable.DrAwais.wednesday.addSession({ "Agile Dev", "Dr.Awais", "Room 4-19", "9:30", "11:00", "BSE-8S" });
    allTeachersTimetable.DrAdeel.wednesday.addSession({ "AC&AG", "Dr.Adeel", "Room 4-18", "1:15", "2:45", "BSE-0S" });
    allTeachersTimetable.EngrSadaf.wednesday.addSession({ "---------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrTameem.wednesday.addSession({ "--------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.EngrWaleed.wednesday.addSession({ "-------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.MrZubair.wednesday.addSession({ "---------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrJoddat.wednesday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrBaseer.wednesday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.EngrAmir.wednesday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.EngrRafia.wednesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrAleem.wednesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrKashif.wednesday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrAmin.wednesday.addSession({ "------------------------------------", "", "", "", "", "" });
    allTeachersTimetable.EngrBilal.tuesday.addSession({ "-------------------------------------", "", "", "", "", "" });


    // Thursday
    allTeachersTimetable.EngrWaleed.thursday.addSession({ "OOP Lab   ", "Engr Waleed", "Lab 4-01", "8:45", "11:00", "BSE-2A" });
    allTeachersTimetable.EngrAmin.thursday.addSession({ "SDA Lab  ", "Engr.Amin", "Lab 4-02", "8:00", "10:15", "BSE-4A" });
    allTeachersTimetable.DrBaseer.thursday.addSession({ "CF Special", "Dr.Baseer", "Room 4-19", "1:15", "2:45", "BSE-0S" });
    allTeachersTimetable.EngrAleem.thursday.addSession({ "OS", "Engr.Aleem", "Room 4-18", "10:15", "11:45", "BSE-4A" });
    allTeachersTimetable.EngrBilal.thursday.addSession({ "EM", "Engr.Bilal", "Room 4-19", "11:45", "1:15", "BSE-4A" });
    allTeachersTimetable.EngrRafia.thursday.addSession({ "WE", "Engr.Rafia", "Room 4-19", "08:00", "09:30", "BSE-6A" });
    allTeachersTimetable.EngrAmir.thursday.addSession({ "WE Lab", "Engr.Amir", "Lab 4-02", "10:15", "12:30", "BSE-6A" });
    allTeachersTimetable.DrKashif.thursday.addSession({ "AI", "Dr.Kashif", "Room 4-18", "12:30", "2:00", "BSE-6A" });
    allTeachersTimetable.DrSohail.thursday.addSession({ "OR", "Dr.Sohail", "Room 4-18", "8:00", "8:45", "BSE-8A" });
    allTeachersTimetable.EngrBilal.thursday.addSession({ "MIS", "Engr.Bilal", "Room 4-19", "10:15", "11:00", "BSE-8A" });
    allTeachersTimetable.EngrAmin.thursday.addSession({ "SME", "Engr.Amin", "Room 4 -19", "11:00", "11:45", "BSE - 8A" });
    allTeachersTimetable.EngrAleem.thursday.addSession({ "DSA Special", "Engr.Aleem", "Lab 4-02", "1:15", "2:45", "BSE-0S" });
    allTeachersTimetable.EngrSadaf.thursday.addSession({ "---------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrAwais.thursday.addSession({ "---------------------------", "", "", "", "", "" });
    allTeachersTimetable.GulamQamar.thursday.addSession({ "---------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrTameem.thursday.addSession({ "--------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.MrZubair.thursday.addSession({ "---------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.SirRahimUllah.thursday.addSession({ "------------------------------ ", "", "", "", "", "" });
    allTeachersTimetable.DrJoddat.thursday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrAdeel.thursday.addSession({ "------------------------------ ", "", "", "", "", "" });


    // Friday
    allTeachersTimetable.EngrSadaf.friday.addSession({ "DS", "Engr.Sadaf", "Room 4-17", "08:45", "10:15", "BSE-2B" });
    allTeachersTimetable.EngrAmir.friday.addSession({ "OS Lab", "Engr.Amir", "Lab 4-02", "08:00", "10:15", "BSE-4A" });
    allTeachersTimetable.EngrAleem.friday.addSession({ "OS", "Engr.Aleem", "Room 4-17", "10:15", "11:00", "BSE-4A" });
    allTeachersTimetable.EngrSadaf.friday.addSession({ "DAA", "Engr.Sadaf", "Room 4-17", "11:00", "11:45", "BSE-4A" });
    allTeachersTimetable.EngrWaleed.friday.addSession({ "AI Lab", "Engr Waleed", "Lab 4-01", "8:00", "10:15", "BSE-6A" });
    allTeachersTimetable.DrTameem.friday.addSession({ "SQE", "Dr.Tameem", "Room 4-18", "10:15", "11:00", "BSE-6A" });
    allTeachersTimetable.EngrAmin.friday.addSession({ "SME", "Engr.Amin", "Room 4 -19", "8:00", "9:30", "BSE-8A" });
    allTeachersTimetable.EngrBilal.friday.addSession({ "MIS", "Engr.Bilal", "Room 4-19", "11:00 ", "11:45 ", "BSE-8A" });
    allTeachersTimetable.EngrRafia.friday.addSession({ "CP Special", "Engr Rafia", "Room 4-18", "11:00", "11:45", "BSE-0(T)" });
    allTeachersTimetable.DrAdeel.friday.addSession({ "AC&AG", "Dr.Adeel", "Room 4-18", "2:00", "2:45", "BSE-0S" });
    allTeachersTimetable.DrAwais.friday.addSession({ "------------------------------------  ", "", "", "", "", "" });
    allTeachersTimetable.GulamQamar.friday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.MrZubair.friday.addSession({ "----------------------------------  ", "", "", "", "", "" });
    allTeachersTimetable.SirRahimUllah.friday.addSession({ "------------------------------ ", "", "", "", "", "" });
    allTeachersTimetable.DrJoddat.friday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrBaseer.friday.addSession({ "--------------------------------- ", "", "", "", "", "" });
    allTeachersTimetable.DrKashif.friday.addSession({ "--------------------------------", "", "", "", "", "" });
    allTeachersTimetable.DrSohail.friday.addSession({ "---------------------------------", "", "", "", "", "" });
   
    //For sections
    // Monday
    allSectionsTimetable.bse2a.monday.addSession({ "DS", "Engr. Sadaf", "Room 4-18", "08:00", "08:45" });
    allSectionsTimetable.bse2a.monday.addSession({ "ISE", "Dr. Awais", "Room 4-18", "08:45", "09:30" });
    allSectionsTimetable.bse2a.monday.addSession({ "ISE", "Dr. Awais", "Room 4-18", "09:30", "10:15" });
    allSectionsTimetable.bse2a.monday.addSession({ "CP", "", "Room 4-18", "10:15", "11:00" });

    // Tuesday
    allSectionsTimetable.bse2a.tuesday.addSession({ "Calculus", "DS Engr. Sadaf", "Room 4-19", "08:00", "08:45" });
    allSectionsTimetable.bse2a.tuesday.addSession({ "DS", "Engr. Sadaf", "Room 4-19", "08:45", "09:30" });
    allSectionsTimetable.bse2a.tuesday.addSession({ "ISE", "Dr. Awais", "Room 4-18", "09:30", "10:15" });
    allSectionsTimetable.bse2a.tuesday.addSession({ "CP", "", "Room 4-18", "10:15", "11:00" });
    allSectionsTimetable.bse2a.tuesday.addSession({ "CP", "", "Room 4-18", "11:00", "11:45" });

    // Wednesday
    allSectionsTimetable.bse2a.wednesday.addSession({ "ECS", "Ghulam Qamar", "Room 4-17", "08:00", "08:45" });
    allSectionsTimetable.bse2a.wednesday.addSession({ "ECS", "Ghulam Qamar", "Room 4-17", "08:45", "09:30" });

    // Thursday
    allSectionsTimetable.bse2a.thursday.addSession({ "CF Special", "Dr. Baseer", "Room 4-19", "08:00", "08:45" });
    allSectionsTimetable.bse2a.thursday.addSession({ "CF Special", "Dr. Baseer", "Room 4-19", "08:45", "09:30" });

    // Friday
    allSectionsTimetable.bse2a.friday.addSession({ "Calculus", "", "Room 4-18", "08:00", "08:45" });
    allSectionsTimetable.bse2a.friday.addSession({ "Understanding of Quran  I", "", "", "12:30", "01:15" });



    // Monday
    allSectionsTimetable.bse2b.monday.addSession({ "ISE", "Dr. Awais", "Room 4-17", "08:00", "08:45" });
    allSectionsTimetable.bse2b.monday.addSession({ "ISE", "Dr. Awais", "Room 4-17", "08:45", "09:30" });
    allSectionsTimetable.bse2b.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.monday.addSession({ "OOP", "Dr. Tamim", "Room 4-19", "10:15", "11:00" });
    allSectionsTimetable.bse2b.monday.addSession({ "OOP", "Dr. Tamim", "Room 4-19", "11:00", "11:45" });
    allSectionsTimetable.bse2b.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.monday.addSession({ "LA", "Mr. Zubair", "Room 4-19", "01:15", "02:00" });

    // Tuesday

    allSectionsTimetable.bse2b.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "ISE", "Dr. Awais", "Room 4-18", "09:30", "10:15" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "OOP", "Dr. Tamim", "Room 4-19", "10:15", "11:00" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "DS", "Engr. Sadaf", "Room 4-17", "11:00", "11:45" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.tuesday.addSession({ "LA", "Mr. Zubair", "Room 4-19", "01:15", "02:00" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "LA", "Mr. Zubair", "Room 4-19", "01:15", "02:00" });

    // Wednesday
    allSectionsTimetable.bse2b.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "ECS", "Ghulam Qamar", "Room 4-17", "09:30", "10:15" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "ECS", "Ghulam Qamar", "Room 4-17", "10:15", "11:00" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "ISE", "Dr. Awais", "Room 4-17", "08:00", "08:45" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "ISE", "Dr. Awais", "Room 4-17", "08:45", "09:30" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "IS", "Dr. Rahimullah", "Room 4-19", "12:30", "01:15" });
    allSectionsTimetable.bse2b.wednesday.addSession({ "IS", "Dr. Rahimullah", "Room 4-19", "01:15", "02:00" });
    // Thursday 
    allSectionsTimetable.bse2b.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.thursday.addSession({ "OOP Lab", "Engr. Waleed", "Lab 4-01", "08:45", "09:30" });
    allSectionsTimetable.bse2b.thursday.addSession({ "OOP Lab", "Engr. Waleed", "Lab 4-01", "09:30", "10:15" });
    allSectionsTimetable.bse2b.thursday.addSession({ "OOP Lab", "Engr. Waleed", "Lab 4-01", "10:15", "11:00" });
    allSectionsTimetable.bse2b.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.thursday.addSession({ "X", "X", "X", "X", "X" });

    // Friday
    allSectionsTimetable.bse2b.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.friday.addSession({ "DS", "Engr. Sadaf", "Room 4-17", "08:45", "09:30" });
    allSectionsTimetable.bse2b.friday.addSession({ "DS", "Engr. Sadaf", "Room 4-17", "09:30", "10:15" });
    allSectionsTimetable.bse2b.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.friday.addSession({ "Understanding of Quran - I", "X", "X", "11:45", "12:30" });
    allSectionsTimetable.bse2b.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse2b.friday.addSession({ "X", "X", "X", "X", "X" });


    // Monday
    allSectionsTimetable.bse4a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.monday.addSession({ "DBMS", "Dr. Joddat", "Room 4-17", "09:30", "10:15" });
    allSectionsTimetable.bse4a.monday.addSession({ "DBMS", "Dr. Joddat", "Room 4-17", "10:15", "11:00" });
    allSectionsTimetable.bse4a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.monday.addSession({ "DAA", "Engr. Sadaf", "Room 4-18", "11:45", "12:30" });
    allSectionsTimetable.bse4a.monday.addSession({ "DAA", "Engr. Sadaf", "Room 4-18", "12:30", "01:15" });

    // Tuesday
    allSectionsTimetable.bse4a.tuesday.addSession({ "DBMS Lab", "Engr. Waleed", "Lab 4-01", "08:00", "08:45" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "DBMS Lab", "Engr. Waleed", "Lab 4-01", "08:45", "09:30" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "DBMS Lab", "Engr. Waleed", "Lab 4-01", "9:30", "10:15" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "DBMS", "Dr. Joddat", "Room 4-17", "10:15", "11:00" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "EM", "Engr. Bilal", "Room 4-18", "11:00", "11:45" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "SDA", "Dr. Awais", "Room 4-17", "11:45", "12:30" });
    allSectionsTimetable.bse4a.tuesday.addSession({ "SDA", "Dr. Awais", "Room 4-17", "12:30", "01:15" });

    // Wednesday
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.wednesday.addSession({ "X", "X", "X", "X", "X" });

    // Thursday 
    allSectionsTimetable.bse4a.thursday.addSession({ "SDA Lab", "Engr. Amin", "Lab 4-02", "08:00", "08:45" });
    allSectionsTimetable.bse4a.thursday.addSession({ "SDA Lab", "Engr. Amin", "Lab 4-02", "08:45", "09:30" });
    allSectionsTimetable.bse4a.thursday.addSession({ "SDA Lab", "Engr. Amin", "Lab 4-02", "09:30", "10:15" });
    allSectionsTimetable.bse4a.thursday.addSession({ "OS", "Engr. Aleem", "Room 4-18", "10:15", "11:00" });
    allSectionsTimetable.bse4a.thursday.addSession({ "OS", "Engr. Aleem", "Room 4-18", "11:00", "11:45" });
    allSectionsTimetable.bse4a.thursday.addSession({ "EM", "Engr. Bilal", "Room 4-19", "11:45", "12:30" });
    allSectionsTimetable.bse4a.thursday.addSession({ "EM", "Engr. Bilal", "Room 4-19", "12:30", "01:15" });

    // Friday
    allSectionsTimetable.bse4a.friday.addSession({ "OS Lab", "Engr. Aamir", "Lab 4-02", "08:00", "08:45" });
    allSectionsTimetable.bse4a.friday.addSession({ "OS Lab", "Engr. Aamir", "Lab 4-02", "08:45", "09:30" });
    allSectionsTimetable.bse4a.friday.addSession({ "OS Lab", "Engr. Aamir", "Lab 4-02", "09:30", "10:15" });
    allSectionsTimetable.bse4a.friday.addSession({ "OS", "Engr. Aleem", "Room 4-17", "10:15", "11:00" });
    allSectionsTimetable.bse4a.friday.addSession({ "DAA", "Engr. Sadaf", "Room 4-17", "11:00", "11:45" });
    allSectionsTimetable.bse4a.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse4a.friday.addSession({ "X", "X", "X", "X", "X" });


    // Monday
    allSectionsTimetable.bse6a.monday.addSession({ "CC", "Dr. Adeel", "Room 4-18", "08:00", "08:45" });
    allSectionsTimetable.bse6a.monday.addSession({ "CC", "Dr. Adeel", "Room 4-18", "08:45", "09:30" });
    allSectionsTimetable.bse6a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse6a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse6a.monday.addSession({ "HCI", "Dr. Joddat", "Room 4-17", "11:00", "11:45" });
    allSectionsTimetable.bse6a.monday.addSession({ "HCI", "Dr. Joddat", "Room 4-17", "11:45", "12:30" });
    allSectionsTimetable.bse6a.monday.addSession({ "TRW", "Dr. Baseer", "Room 4-17", "12:30", "01:15" });

    // Tuesday
    allSectionsTimetable.bse6a.tuesday.addSession({ "SQE", "Dr. Tamim", "Room 4-18", "08:00", "08:45" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "SQE", "Dr. Tamim", "Room 4-18", "08:45", "09:30" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "HCI", "Dr. Joddat", "Room 4-17", "09:30", "10:15" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "CC Lab", "Engr. Aamir", "Lab 4-02", "10:15", "11:00" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "CC Lab", "Engr. Aamir", "Lab 4-02", "11:00", "11:45" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "CC Lab", "Engr. Aamir", "Lab 4-02", "11:45", "12:30" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "TRW", "Dr. Baseer", "Room 4-18", "12:30", "01:15" });
    allSectionsTimetable.bse6a.tuesday.addSession({ "TRW", "Dr. Baseer", "Room 4-18", "01:15", "02:00" });

    // Wednesday
    allSectionsTimetable.bse6a.wednesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse6a.wednesday.addSession({ "X", "X", "X", "X", "X" });

    // Thursday 
    allSectionsTimetable.bse6a.thursday.addSession({ "WE", "Engr. Rafia", "Room 4-19", "08:00", "08:45" });
    allSectionsTimetable.bse6a.thursday.addSession({ "WE", "Engr. Rafia", "Room 4-19" "08:45", "09:30" });
    allSectionsTimetable.bse6a.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse6a.thursday.addSession({ "WE Lab", "Engr. Aamir", "Lab 4-02", "10:15", "11:00" });
    allSectionsTimetable.bse6a.thursday.addSession({ "WE Lab", "Engr. Aamir", "Lab 4-02", "11:00", "11:45" });
    allSectionsTimetable.bse6a.thursday.addSession({ "WE Lab", "Engr. Aamir", "Lab 4-02", "11:45", "12:30" });
    allSectionsTimetable.bse6a.thursday.addSession({ "AI", "Dr. Kashif", "Room 4-18", "12:30", "01:15" });
    allSectionsTimetable.bse6a.thursday.addSession({ "AI", "Dr. Kashif", "Room 4-18", "01:15", "02:00" });

    // Friday 
    allSectionsTimetable.bse6a.friday.addSession({ "AI Lab", "Engr. Waleed", "Lab 4-01", "08:00", "08:45" });
    allSectionsTimetable.bse6a.friday.addSession({ "AI Lab", "Engr. Waleed", "Lab 4-01", "08:45", "09:30" });
    allSectionsTimetable.bse6a.friday.addSession({ "AI Lab", "Engr. Waleed", "Lab 4-01", "09:30", "10:15" });
    allSectionsTimetable.bse6a.friday.addSession({ "SQE", "Dr. Tamim", "Room 4-18", "10:15", "11:00" });

    // Monday
    allSectionsTimetable.bse8a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.monday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.monday.addSession({ "X", "X", "X", "X", "X" });

    // Tuesday
    allSectionsTimetable.bse8a.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.tuesday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.tuesday.addSession({ "X", "X", "X", "X", "X" });

    // Wednesday
    allSectionsTimetable.bse8a.wednesday.addSession({ "OR", "Dr. Sohail", "Room 4-19", "08:00", "08:45" });
    allSectionsTimetable.bse8a.wednesday.addSession({ "OR", "Dr. Sohail", "Room 4-19", "08:45", "09:30" });

    // Thursday 
    allSectionsTimetable.bse8a.thursday.addSession({ "OR", "Dr. Sohail", "Room 4-18", "08:00", "08:45" });
    allSectionsTimetable.bse8a.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.thursday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.thursday.addSession({ "MIS", "Engr. Bilal", "Room 4-19", "10:15", "11:00" });
    allSectionsTimetable.bse8a.thursday.addSession({ "SME", "Engr. Amin", "Room 4-19", "11:00", "11:45" });

    // Friday

    allSectionsTimetable.bse8a.friday.addSession({ "SME", "Engr. Amin", "Room 4-19", "8:00", "8:45" });
    allSectionsTimetable.bse8a.friday.addSession({ "SME", "Engr. Amin", "Room 4-19", "8:45", "9:30" });
    allSectionsTimetable.bse8a.friday.addSession({ "X", "X", "X", "X", "X" });
    allSectionsTimetable.bse8a.friday.addSession({ "MIS", "Engr. Bilal", "Room 4-19", "10:15", "11:00" });
    allSectionsTimetable.bse8a.friday.addSession({ "MIS", "Engr. Bilal", "Room 4-19", "11:00", "11:45" });

    //For roomwise
    timetable.addSession("Monday", { "ISE", "Dr.Awais", "4-17", "08:00", "09:30" });
    timetable.addSession("Monday", { "DBMS", "Dr. Joddat", "4-17", "09:30", "11:00" });
    timetable.addSession("Monday", { "HCI", "Dr. Joddat", "4-17", "11:00", "12:30" });
    timetable.addSession("Monday", { "DS", "Engr. Sadaf", "4-18", "09:30", "11:00" });
    timetable.addSession("Monday", { "ISE", "Dr. Awais", "4-18", "11:00", "11:45" });
    timetable.addSession("Monday", { "CP", "Dr. Johnson", "4-18", "01:15", "02:00" });
    timetable.addSession("Monday", { "DAA", "Engr. Sadaf", "4-18", "11:45", "01:15" });
    timetable.addSession("Monday", { "CC", "Dr. Adeel", "4-18", "08:00", "09:30" });
    timetable.addSession("Monday", { "OOP", "Dr. Tamim", "4-19", "10:15", "11:45" });
    timetable.addSession("Monday", { "LA", "Mr. Zubair", "4-19", "01:15", "02:00" });

    //Tuesday
    timetable.addSession("Tuesday", { "DS", "Engr. Sadaf", "4-17", "11:00", "11:45" });
    timetable.addSession("Tuesday", { "DBMS", "Dr. Joddat", "4-17", "10:15", "11:00" });
    timetable.addSession("Tuesday", { "SDA", "Dr. Awais", "4-17", "11:45", "01:15" });
    timetable.addSession("Tuesday", { "HCI", "Dr. Joddat", "4-17", "09:30", "10:15" });
    timetable.addSession("Tuesday", { "Calculus", "Dr. Adeel", "4-18", "08:00", "08:45" });
    timetable.addSession("Tuesday", { "ISE", "Dr. Awais", "4-18", "10:15", "11:00" });
    timetable.addSession("Tuesday", { "CP", "Dr. Joddat", "4-18", "01:15", "02:45" });
    timetable.addSession("Tuesday", { "ISE", "Dr. Awais", "4-18", "00:30", "10:15" });
    timetable.addSession("Tuesday", { "EM", "Engr. Bilal", "4-18", "11:00", "11:45" });
    timetable.addSession("Tuesday", { "SQE", "Dr. Tamim", "4-18", "08:00", "09:30" });
    timetable.addSession("Tuesday", { "TRW", "Dr. Baseer", "4-18", "12:30", "02:00" });
    timetable.addSession("Tuesday", { "DS", "Engr. Sadaf", "4-19", "08:00", "09:30" });
    timetable.addSession("Tuesday", { "OOP", "Dr. Tamim", "4-19", "10:15", "11:00" });
    timetable.addSession("Tuesday", { "LA", "Mr. Zubair", "4-19", "12:30", "02:00" });
    timetable.addSession("Tuesday", { "CC", "Engr. Aamir", "4-02", "08:00","10:15" });
    timetable.addSession("Tuesday", { "DBMS", "Engr. Waleed", "4-01", "08:00","10:15" });

    //Wednesday

    timetable.addSession("Wednesday", { "ECS", "Ghulam Qamar", "4-17", "08:00", "09:30" });
    timetable.addSession("Wednesday", { "ECS", "Ghulam Qamar", "4-17", "09:30", "11:00" });
    timetable.addSession("Wednesday", { "IS", "Dr. Rahimullah", "4-19", "12:30", "02:00" });
    timetable.addSession("Wednesday", { "OR", "Dr. Sohail", "4-19", "08:00", "09:30" });

	//Thursday
     timetable.addSession("Thursday", { "CF Special", "Dr. Baseer", "4-19", "08:00", "09:30" });
    timetable.addSession("Thursday", { "OS", "Engr. Aleem", "4-18", "10:15", "11:45" });
    timetable.addSession("Thursday", { "EM", "Engr. Bilal", "4-19", "11:45", "01:15" });
    timetable.addSession("Thursday", { "WE", "Engr. Rafia", "4-19" "08:00", "09:30" });
    timetable.addSession("Thursday", { "AI", "Dr. Kashif", "4-18", "12:30", "02:00" });
    timetable.addSession("Thursday", { "OR", "Dr. Sohail", "4-18", "08:00", "08:45" });
    timetable.addSession("Thursday", { "MIS", "Engr. Bilal", "4-19", "10:15", "11:00" });
    timetable.addSession("Thursday", { "SME", "Engr. Amin", "4-19", "11:00", "11:45" });
    timetable.addSession("Thursday", { "OOP", "Engr. Waleed", "4-01", "08:45","11:00" });
    timetable.addSession("Thursday", { "OOP", "Engr. Waleed", "4-01", "11:00","01:15" });
    timetable.addSession("Thursday", { "WE", "Engr. Aamir", "4-02", "10:15","12:30" });
    timetable.addSession("Thursday", { "SDA", "Engr. Amin", "4-02", "08:00","10:15" });

    //Friday
    timetable.addSession("Friday", { "Calculus", "", "4-18", "08:00", "08:45" });
    timetable.addSession("Friday", { "Understanding of Quran  I", "", "", "12:30", "01:15" });
    timetable.addSession("Friday", { "DS", "Engr. Sadaf", "4-17", "08:45", "10:15" });
    timetable.addSession("Friday", { "Understanding of Quran - I", "X", "X", "11:45", "12:30" });
    timetable.addSession("Friday", { "OS", "Engr. Aleem", "4-17", "10:15", "11:00" });
    timetable.addSession("Friday", { "DAA", "Engr. Sadaf", "4-17", "11:00", "11:45" });
    timetable.addSession("Friday", { "SQE", "Dr. Tamim", "4-18", "10:15", "11:00" });
    timetable.addSession("Friday", { "SME", "Engr. Amin", "4-19", "8:00", "9:30" });
    timetable.addSession("Friday", { "MIS", "Engr. Bilal", "4-19", "10:15", "11:45" });
    timetable.addSession("Friday", { "OS", "Engr. Aamir", "4-02", "08:00","10:15" });
    timetable.addSession("Friday", { "AI", "Engr. Waleed", "4-01", "08:00","10:15" });

    //For students
    timetable2.Emaan. monday.addSession ({ "ISE", "Dr.Awais", "4-17", "08:00", "09:30" });
    timetable2.Emaan.monday.addSession({ "DBMS", "Dr. Joddat", "4-17", "09:30", "11:00" });
    timetable2  .Emaan.tuesday .addSession ({ "DS", "Engr. Sadaf", "4-17", "11:00", "11:45" });
    timetable2.Emaan.wednesday.addSession({ "ECS", "Ghulam Qamar", "4-17", "08:00", "09:30" });
    timetable2.Emaan.thursday.addSession({ "CF Special", "Dr. Baseer", "4-19", "08:00", "09:30" });
    timetable2.Emaan.thursday.addSession({ "OS", "Engr. Aleem", "4-18", "10:15", "11:45" });
    timetable2.Emaan.friday.addSession({ "OS", "Engr. Aleem", "4-17", "10:15", "11:00" });
    timetable2.Emaan.friday.addSession({ "OS Lab", "Engr. Aleem", "4-17", "11:00", "12:30" });



    timetable2.Madeiha.monday.addSession({ "DAA", "Engr. Sadaf", "4-18", "11:45", "01:15" });
    timetable2.Madeiha.tuesday.addSession({ "DS", "Engr. Sadaf", "4-17", "11:00", "11:45" });
    timetable2.Madeiha.tuesday.addSession({ "DBMS", "Dr. Joddat", "4-17", "10:15", "11:00" });
    timetable2.Madeiha.wednesday.addSession({ "ECS", "Ghulam Qamar", "4-17", "08:00", "09:30" });
    timetable2.Madeiha.thursday.addSession({ "CF Special", "Dr. Baseer", "4-19", "08:00", "09:30" });
    timetable2.Madeiha.thursday.addSession({ "OS", "Engr. Aleem", "4-18", "10:15", "11:45" });
    timetable2.Madeiha.friday.addSession({ "Calculus", "", "4-18", "08:00", "08:45" });


     timetable2.Ayesha.monday. addSession( { "ISE", "Dr. Awais", "4-18", "11:00", "11:45" });
     timetable2.Ayesha.monday.addSession( { "CP", "Dr. Johnson", "4-18", "01:15", "02:00" });
     timetable2.Ayesha.tuesday.addSession({ "DBMS Lab", "Engr. Waleed", "Lab 4-01", "08:45", "09:30" });
     timetable2.Ayesha.tuesday.addSession({ "DBMS Lab", "Engr. Waleed", "Lab 4-01", "9:30", "10:15" });
     timetable2.Ayesha.wednesday.addSession( { "ECS", "Ghulam Qamar", "4-17", "09:30", "11:00" });
     timetable2.Ayesha.thursday.addSession( { "CF Special", "Dr. Baseer", "4-19", "08:00", "09:30" });
    timetable2.Ayesha.thursday.addSession( { "OS", "Engr. Aleem", "4-18", "10:15", "11:45" });
 timetable2.Ayesha.thursday.addSession( { "Calculus", "", "4-18", "08:00", "08:45" });
  
 timetable2.Iqra.monday  .addSession( { "DAA", "Engr. Sadaf", "4-18", "11:45", "01:15" });
 timetable2.Iqra.monday.addSession( { "CC", "Dr. Adeel", "4-18", "08:00", "09:30" });
 timetable2.Iqra.tuesday.addSession( { "TRW", "Dr. Baseer", "4-18", "12:30", "02:00" });
 timetable2.Iqra.tuesday.addSession( { "DS", "Engr. Sadaf", "4-19", "08:00", "09:30" });
 timetable2.Iqra.wednesday.addSession( { "OR", "Dr. Sohail", "4-19", "08:00", "09:30" });
 timetable2.Iqra.thursday.addSession( { "SME", "Engr. Amin", "4-19", "11:00", "11:45" });
 timetable2.Iqra.thursday.addSession( { "OOP", "Engr. Waleed", "4-01", "08:45","11:00" });
    timetable2.Iqra.friday.addSession( { "Understanding of Quran - I", "X", "X", "11:45", "12:30" });
    
   
    timetable2.Atqa.monday .addSession( { "OOP", "Dr. Tamim", "4-19", "10:15", "11:45" });
    timetable2.Atqa.monday.addSession({ "LA", "Mr. Zubair", "4-19", "01:15", "02:00" });
    timetable2.Atqa.tuesday.addSession({ "DS", "Engr. Sadaf", "4-17", "11:00", "11:45" });
    timetable2.Atqa.tuesday.addSession({ "DBMS", "Dr. Joddat", "4-17", "10:15", "11:00" });
    timetable2.Atqa.wednesday.addSession( { "OR", "Dr. Sohail", "4-19", "08:00", "09:30" });
    timetable2.Atqa.thursday.addSession( { "AI", "Dr. Kashif", "4-18", "12:30", "02:00" });
    timetable2.Atqa.thursday.addSession( { "OR", "Dr. Sohail", "4-18", "08:00", "08:45" });
    timetable2.Atqa.friday.addSession({ "OS", "Engr. Aleem", "4-17", "10:15", "11:00" });




    cout << "--------------------------------------------------" << endl;
    cout << "         BAHRIA UNIVERSITY (BSE) TIMETABLE            " << endl;
    cout << "--------------------------------------------------" << endl;

    int choice;
    string choiceString;
    string name1, password1;
    string name2, password2;
    bool registered = false;

    

    while (true) {
        cout << "Enter your choice..." << endl;
        cout << "1:Register" << endl;
        cout << "2:Login" << endl;
        cout << "3:Teacher wise timetable" << endl;
        cout << "4:Section wise timetable" << endl;
        cout << "5:Room wise timetable " << endl;
        cout << "6:Student wise timetable " << endl;
        cout << "7:Queries" << endl;
        cout << "8:Exit" << endl;

        cout << "Choice: ";
        cin >> choiceString;
        bool validInput = true;
        for (char c : choiceString) {
            if (!isdigit(c)) {
                validInput = false;
                break;
            }
        }

        if (!validInput) {

            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        choice = stoi(choiceString);


        switch (choice) {
        case 1: {
            cout << "Enter your name:" << endl;
            cin >> name1;
            cout << "Instructions:" << endl;
            cout << "Password should have:" << endl;
            cout << "1. Length should be exactly 8 characters" << endl;
            cout << "2. At least 1 upper case letter" << endl;
            cout << "3. At least 1 lower case letter" << endl;
            cout << "4. At least 1 digit" << endl;
            cout << "5. At least 1 special character" << endl;
            cout << "Enter your password:" << endl;
            cin >> password1;

            // Registration functionality
            if (password1.length() == 8) {
                bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecialCharacter = false;
                for (char c : password1) {
                    if (isupper(c)) {
                        hasUpper = true;
                    }
                    else if (islower(c)) {
                        hasLower = true;
                    }
                    else if (isdigit(c)) {
                        hasDigit = true;
                    }
                    else if (!isalnum(c)) {
                        hasSpecialCharacter = true;
                    }
                }
                if (hasUpper && hasLower && hasDigit && hasSpecialCharacter) {
                    cout << "Thank you for choosing Bahria!" << endl;
                    registered = true;
                      // Write registration data to file
                        ofstream regFile("registration.txt");
                        if (regFile.is_open()) {
                            regFile << name1 << endl;
                            regFile << password1 << endl;
                            regFile.close();
                        } else {
                            cout << "Unable to open file for registration." << endl;
                        }

                   
                }
                else {
                    cout << "Please follow the password instructions" << endl;
                }
            }
            else {
                cout << "Password length should be exactly 8 characters" << endl;
            }
            break;
        }

        case 2: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "Enter your name:" << endl;
            cin >> name2;
            cout << "Enter your password:" << endl;
            cin >> password2;

            // Login functionality
            if (name2 == name1 && password2 == password1) {
                cout << "Welcome to Bahria university website" << endl;
            }
            else {
                cout << "Invalid username or password" << endl;
            }
            break;
        }
        case 3: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "* TEACHER'S TIMETABLE *" << endl;

            allTeachersTimetable.display();
            break;
        }
        case 4: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "Displaying section wise timetable..." << endl;

            allSectionsTimetable.display();
            break;
        }
        case 5: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "Enter the room/lab number to display its timetable: ";
            string roomNumberToDisplay;
            cin >> roomNumberToDisplay;

      
            string dayToDisplay;
            cout << "Enter the day (Monday/Tuesday/Wednesday/Thursday/Friday): ";
            cin >> dayToDisplay;
            // Read timetable from file and display
                ifstream roomFile(roomNumberToDisplay + ".txt");
                if (roomFile.is_open()) {
                    string line;
                    while (getline(roomFile, line)) {
                        if (line.find(dayToDisplay) != string::npos) {
                            cout << line << endl;
                        }
                    }
                    roomFile.close();
                } else {
                    cout << "Unable to open file for room timetable." << endl;
                }
            timetable.displaySessionsForRoomAndDay(roomNumberToDisplay, dayToDisplay);
            break;
        }
        case 6: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "Displaying student wise timetable..." << endl;
            cout << "Enter name to display its timetable: ";
            string nameToDisplay;
            cin >> nameToDisplay;

            if (nameToDisplay == "Emaan")
            {
               timetable2. Emaan.display();
            }
            else if (nameToDisplay == "Madeiha")
            {
                timetable2.Madeiha.display();
            }
            else  if (nameToDisplay == "Ayesha")
            {
                timetable2.Ayesha.display();
            }
            else   if (nameToDisplay == "Iqra")
            {
                timetable2.Iqra.display();
            }
            else  if (nameToDisplay == "Atqa")
            {
                timetable2.Atqa.display();
            }
            else
            {
                cout << "Enter valid name" << endl;
            }

            break;
        }
        case 7: {
            if (!registered) {
                cout << "No users are registered. Please register first!" << endl;
                break;
            }
            cout << "Enter the day for which you want to display timetable: ";
            string day, timestart;
            cin >> day;
            cout << "Enter the time for which you want to display timetable: ";
            cin >> timestart;

            displayTimetable(day, timestart);
            break;
        }
        case 8:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
