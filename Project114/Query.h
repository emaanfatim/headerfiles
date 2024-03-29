#pragma once

#include<iostream>
#include<string>
using namespace std;
void displayTimetable(const string& day, const string& timestart) {
    if (day == "Monday" && timestart == "08:00")
    {
        cout << "Dr.Awais-------BSE-2B--------ISE" << endl;
        cout << "Dr.Adeel-------BSE-6A--------CC" << endl;
    }
    else if (day == "Monday" && timestart == "08:45")
    {
        cout << "Dr.Awais-------BSE-2B--------ISE" << endl;
        cout << "Dr.Adeel-------BSE-6A--------CC" << endl;
    }
    else if (day == "Monday" && timestart == "09:30")
    {
        cout << "Engr.Sadaf-------BSE-2A--------DS" << endl;
        cout << "Dr.Joddat-------BSE-4A--------DBMS" << endl;
    }
    else  if (day == "Monday" && timestart == "10:15")
    {
        cout << "Dr.Awais-------BSE-2A--------ISE" << endl;
        cout << "Dr.Tamim-------BSE-2B--------OOP" << endl;
        cout << "Dr.Joddat-------BSE-4A--------DBMS" << endl;
    }
    else if (day == "Monday" && timestart == "11:00")
    {
        cout << "Dr.Awais-------BSE-2A--------ISE" << endl;
        cout << "Dr.Tamim-------BSE-2B--------OOP" << endl;
        cout << "Dr.Joddat-------BSE-6A--------HCI" << endl;

    }
    else if (day == "Monday" && timestart == "11:45")
    {
        cout << "Engr.Sadaf-------BSE-4A--------DAA" << endl;
        cout << "Dr.Joddat-------BSE-6A--------HCI" << endl;

    }
    else if (day == "Monday" && timestart == "12:30")
    {
        cout << "Engr.Sadaf-------BSE-4A--------DAA" << endl;
        cout << "Dr.Baseer-------BSE-6A--------TRW" << endl;

    }
    else if (day == "Monday" && timestart == "01:15")
    {
        cout << "Dr.Joddat-------BSE-2A--------CP" << endl;
        cout << "Mr.Zubair-------BSE-2B--------LA" << endl;
    }

    else if (day == "Tuesday" && timestart == "08:00")
    {
        cout << "Engr.Waleed-------BSE-4A--------DBMS Lab" << endl;
        cout << "Dr.Adeel-------BSE-2A--------Calculus" << endl;
        cout << "Dr.Tamim-------BSE-6A--------SQE" << endl;
    }
    else if (day == "Tuesday" && timestart == "08:45")
    {
        cout << "Dr.Tamim-------BSE-6A--------SQE" << endl;
        cout << "Engr.Waleed-------BSE-4A--------DBMS Lab" << endl;
        cout << "Engr.Sadaf-------BSE-2A--------DS" << endl;

    }
    else if (day == "Tuesday" && timestart == "09:30")
    {
        cout << "Engr.Sadaf-------BSE-2A--------DS" << endl;
        cout << "Dr.Awais-------BSE-2B--------ISE" << endl;
        cout << "Engr.Waleed-------BSE-4A--------DBMS Lab" << endl;
        cout << "Dr.Joddat-------BSE-6A--------HCI" << endl;

    }
    else  if (day == "Tuesday" && timestart == "10:15")
    {
        cout << "Dr.Awais-------BSE-2A--------ISE" << endl;
        cout << "Engr.Aamir-------BSE-6A--------CC Lab" << endl;
        cout << "Dr.Tamim-------BSE-2B--------OOP" << endl;
        cout << "Dr.Joddat-------BSE-4A--------DBMS" << endl;
    }
    else if (day == "Tuesday" && timestart == "11:00")
    {
        cout << "Engr.Bilal-------BSE-4A--------EM" << endl;
        cout << "Engr.Sadaf-------BSE-2A--------DS" << endl;
        cout << "Engr.Aamir-------BSE-6A--------CC Lab" << endl;


    }
    else if (day == "Tuesday" && timestart == "11:45")
    {
        cout << "Engr.Sadaf-------BSE-4A--------DAA" << endl;
        cout << "Dr.Awais-------BSE-4A--------SDA" << endl;

    }
    else if (day == "Tuesday" && timestart == "12:30")
    {
        cout << "Mr.Zubair-------BSE-2B--------LA" << endl;
        cout << "Dr.Awais-------BSE-4A--------SDA" << endl;
        cout << "Dr.Baseer-------BSE-6A--------TRW" << endl;

    }
    else if (day == "Tuesday" && timestart == "01:15")
    {
        cout << "Dr.Baseer-------BSE-6A--------TRW" << endl;
        cout << "Dr.Joddat-------BSE-2A--------CP" << endl;
        cout << "Mr.Zubair-------BSE-2B--------LA" << endl;
    }
    else if (day == "Tuesday" && timestart == "02:00")
    {

        cout << "Dr.Joddat-------BSE-2A--------CP" << endl;
    }

    else   if (day == "Wednesday" && timestart == "08:00")
    {
        cout << "Ghulam Qamar-------BSE-2A--------ECS" << endl;
        cout << "Dr.Sohail-------BSE-8A--------OR" << endl;
    }
    else if (day == "Wednesday" && timestart == "08:45")
    {
        cout << "Dr.Sohail-------BSE-8A--------OR" << endl;
        cout << "Ghulam Qamar-------BSE-2A--------ECS" << endl;
    }
    else if (day == "Wednesday" && timestart == "09:30")
    {
        cout << "Ghulam Qamar-------BSE-2B--------ECS" << endl;
    }
    else  if (day == "Wednesday" && timestart == "10:15")
    {
        cout << "Ghulam Qamar-------BSE-2B--------ECS" << endl;

    }
    else if (day == "Wednesday" && timestart == "11:00")
    {
        cout << "Dr.Rahimullah-------BSE-2A--------IS" << endl;

    }
    else if (day == "Wednesday" && timestart == "11:45")
    {
        cout << "Dr.Rahimullah-------BSE-2A--------IS" << endl;

    }
    else if (day == "Wednesday" && timestart == "12:30")
    {
        cout << "Dr.Rahimullah-------BSE-2B--------IS" << endl;

    }
    else if (day == "Wednesday" && timestart == "01:15")
    {
        cout << "Dr.Rahimullah-------BSE-2B--------IS" << endl;
    }

    else  if (day == "Thursday" && timestart == "08:00")
    {
        cout << "Engr.Amin-------BSE-4A--------SDA Lab" << endl;
        cout << "Engr.Raafia-------BSE-6A--------WE" << endl;
        cout << "Dr.Sohail-------BSE-8A--------OR";
    }
    else if (day == "Thursday" && timestart == "08:45")
    {
        cout << "Engr.Waleed-------BSE-2B--------OOP Lab" << endl;
        cout << "Engr.Raafia-------BSE-6A--------WE" << endl;
        cout << "Engr.Amin-------BSE-4A--------SDA Lab" << endl;

    }
    else if (day == "Thursday" && timestart == "09:30")
    {
        cout << "Engr.Waleed-------BSE-2B--------OOP Lab" << endl;
        cout << "Engr.Amin-------BSE-4A--------SDA Lab" << endl;
    }
    else  if (day == "Thursday" && timestart == "10:15")
    {
        cout << "Engr.Waleed-------BSE-2B--------OOP Lab" << endl;
        cout << "Engr.Bilal-------BSE-8A--------MIS" << endl;
        cout << "Engr.Aamir-------BSE-6A--------WE Lab" << endl;
        cout << "Engr.Aleem-------BSE-4A--------OS" << endl;
    }
    else if (day == "Thursday" && timestart == "11:00")
    {
        cout << "Engr.Aamir-------BSE-6A--------WE Lab" << endl;
        cout << "Engr.Waleed-------BSE-2A--------OOP Lab" << endl;
        cout << "Engr.Bilal-------BSE-8A--------MIS" << endl;
        cout << "Engr.Amin-------BSE-8A--------SME" << endl;
        cout << "Engr.Aleem-------BSE-4A--------OS" << endl;

    }
    else if (day == "Thursday" && timestart == "11:45")
    {
        cout << "Engr.Aamir-------BSE-6A--------WE Lab" << endl;
        cout << "Engr.Waleed-------BSE-2A--------OOP Lab" << endl;
        cout << "Engr.Bilal-------BSE-4A--------EM" << endl;

    }
    else if (day == "Thursday" && timestart == "12:30")
    {
        cout << "Dr.Kashif-------BSE-6A--------AI" << endl;
        cout << "Engr.Waleed-------BSE-2A--------OOP Lab" << endl;
        cout << "Engr.Bilal-------BSE-4A--------EM" << endl;
        cout << "Dr.Baseer-------BSE-6A--------TRW" << endl;

    }
    else if (day == "Thursday" && timestart == "01:15")
    {
        cout << "Dr.Kashif-------BSE-6A--------AI" << endl;
        cout << "Dr.Baseer-------BSE-2A--------CF Special" << endl;
    }
    else if (day == "Thursday" && timestart == "02:00")
    {
        cout << "Dr.Baseer-------BSE-2A--------CF Special" << endl;
    }

    else    if (day == "Friday" && timestart == "08:00")
    {
        cout << "Engr.Aamir-------BSE-4A--------OS Lab" << endl;
        cout << "Engr.Amin-------BSE-8A--------SME" << endl;
        cout << "Engr.Waleed-------BSE-6A--------AI Lab" << endl;
        cout << "Dr.Adeel-------BSE-2A--------Calculus" << endl;
    }
    else if (day == "Friday" && timestart == "08:45")
    {
        cout << "Engr.Sadaf-------BSE-2B--------DS" << endl;
        cout << "Engr.Amin-------BSE-8A--------SME" << endl;
        cout << "Engr.Waleed-------BSE-6A--------AI Lab" << endl;
        cout << "Engr.Aamir-------BSE-4A--------OS Lab" << endl;

    }
    else if (day == "Friday" && timestart == "09:30")
    {
        cout << "Engr.Sadaf-------BSE-2A--------DS" << endl;
        cout << "Engr.Waleed-------BSE-6A--------AI Lab" << endl;
        cout << "Engr.Sadaf-------BSE-2B--------DS" << endl;
        cout << "Engr.Aamir-------BSE-4A--------OS Lab" << endl;
        cout << "Dr.Joddat-------BSE-4A--------DBMS" << endl;
    }
    else  if (day == "Friday" && timestart == "10:15")
    {
        cout << "Engr.Aleem-------BSE-4A--------OS" << endl;
        cout << "Engr.Sadaf-------BSE-4A--------DAA" << endl;
        cout << "Dr.Tamim-------BSE-6A--------SQE" << endl;
        cout << "Engr.Bilal-------BSE-8A--------MIS" << endl;
    }
    else if (day == "Friday" && timestart == "11:45")
    {
        cout << "-------BSE-2A--------Underst&&ing of Quran - I" << endl;
        cout << "-------BSE-2B--------Underst&&ing of Quran - I" << endl;


    }
    else {
        cout << "No classes scheduled for the given day and time." << endl;
    }
}
