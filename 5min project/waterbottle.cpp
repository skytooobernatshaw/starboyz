#include <iostream>
using namespace std;

class WaterBottle
{
private:
    int capacity;
    int currentWater;

public:
    void getData()
    {
        cout << "Enter bottle capacity (l): ";
        cin >> capacity;

        cout << "Enter current water (l): ";
        cin >> currentWater;

        if (currentWater > capacity)
            currentWater = capacity;
    }

    void drinkWater()
    {
        int amount;
        cout << "Enter amount of water to drink (l): ";
        cin >> amount;

        if (amount > currentWater)
        {
            cout << "Cannot drink! Water level cannot become negative.\n";
        }
        else
        {
            currentWater -= amount;
            cout << "Water consumed successfully.\n";
        }
    }

    void fillBottle()
    {
        currentWater = capacity;
        cout << "Bottle filled successfully.\n";
    }

    void displayWaterLeft()
    {
        cout << "Water Left: " << currentWater << " l\n";
    }
};

int main()
{
    WaterBottle bottle;
    int choice;

    bottle.getData();

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Drink Water\n";
        cout << "2. Fill Bottle\n";
        cout << "3. Display Water Left\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                bottle.drinkWater();
                break;
            case 2:
                bottle.fillBottle();
                break;
            case 3:
                bottle.displayWaterLeft();
                break;
            case 4:
                cout << "Program Ended.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 10);

    return 0;
}
