#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int rollno;
    int energylevel;

public:
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Energy Level (25, 50, 90): ";
        cin >> energylevel;

        if (energylevel == 25)
        {
            cout << "Low Battery! Go drink some coffee before you become a statue!\n";
        }
        else if (energylevel == 50)
        {
            cout << "Half charged! You can survive one more lecture.\n";
        }
        else if (energylevel == 90)
        {
            cout << "Full power! Even the Wi-Fi can't keep up with you!\n";
        }
        else
        {
            cout << " Unknown energy level! Are you a secret boss character?\n";
        }
    }
};

int main()
{
    Student s1;
    s1.getData();

    return 0;
}

