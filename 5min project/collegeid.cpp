#include <iostream>
#include <string>
using namespace std;

class CollegeID
{
    string studentName;
    string department;
    int expiryYear;

public:
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Expiry Year: ";
        cin >> expiryYear;
    }

    void displayCard()
    {
        cout << "\n--- College ID Card ---" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Department   : " << department << endl;
        cout << "Expiry Year  : " << expiryYear << endl;
    }

    void renewCard()
    {
        expiryYear = expiryYear + 1;
        cout << "ID Card Renewed!" << endl;
    }

    void checkExpired()
    {
        if (expiryYear < 2026)
        {
            cout << "ID Card is Expired!" << endl;
        }
        else
        {
            cout << "ID Card is Valid." << endl;
        }
    }
};

int main()
{
    CollegeID card;

    card.getData();
    card.displayCard();
    card.checkExpired();
    card.renewCard();
    card.displayCard();

    return 0;
}


