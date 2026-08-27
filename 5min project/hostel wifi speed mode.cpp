#include <iostream>
using namespace std;

class Hostel {
    string blockName;
    int mbps;

public:
    void getData() {
        cout << "Enter hostel block: ";
        cin >> blockName;
        cout << "WiFi speed (Mbps): ";
        cin >> mbps;
    }

    void speedMood() {
        cout << blockName << " WiFi -> ";
        int tier = mbps / 20; // groups speed into slabs of 20

        switch (tier) {
            case 0:
                cout << "Might as well use 2G" << endl;
                break;
            case 1:
            case 2:
                cout << "Usable, don't push it" << endl;
                break;
            default:
                cout << "Blazing Fast!" << endl;
        }
    }
};

int main() {
    Hostel h1;
    h1.getData();
    h1.speedMood();
    return 0;
}
