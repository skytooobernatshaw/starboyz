#include <iostream>
#include <string>
using namespace std;

class Library
{
    string bookName;
    string author;
    bool isIssued;

public:
    void getData()
    {
        cout << "Enter Book Name: ";
        cin >> bookName;

        cout << "Enter Author Name: ";
        cin >> author;

        isIssued = false;
    }

    void issueBook()
    {
        if (isIssued == false)
        {
            isIssued = true;
            cout << "Book Issued Successfully!" << endl;
        }
        else
        {
            cout << "Sorry! Book is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (isIssued == true)
        {
            isIssued = false;
            cout << "Book Returned Successfully!" << endl;
        }
        else
        {
            cout << "Book is already available." << endl;
        }
    }

    void displayStatus()
    {
        cout << "\nBeook Name : " << bookName << endl;
        cout << "Author    : " << author << endl;

        if (isIssued == true)
            cout << "Status    : Issued" << endl;
        else
            cout << "Status    : Available" << endl;
    }
};

int main()
{
    Library b;

    b.getData();
    b.issueBook();
    b.issueBook();      // Try issuing again
    b.returnBook();
    b.displayStatus();

    return 0;
}
