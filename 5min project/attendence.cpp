#include <iostream>
#include <string>
using namespace std;

class ClassroomAttendance
{
    string subject;
    int totalStudents;
    int presentStudents;
    float attendance;

public:
    void markAttendance()
    {
        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Total Students: ";
        cin >> totalStudents;

        cout << "Enter Present Students: ";
        cin >> presentStudents;
    }

    void calculateAttendance()
    {
        attendance = (presentStudents * 100.0) / totalStudents;
        cout << "Attendance Percentage: " << attendance << "%" << endl;
    }

    void checkAttendance()
    {
        if (attendance >= 75)
        {
            cout << "Good! Attendance is above 75%." << endl;
        }
        else
        {
            cout << "Attendance is below 75%. Improve attendance!" << endl;
        }
    }
};

int main()
{
    ClassroomAttendance obj;

    obj.markAttendance();
    obj.calculateAttendance();
    obj.checkAttendance();

    return 0;
}

