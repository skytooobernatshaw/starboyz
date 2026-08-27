#include <iostream>
using namespace std;
 class Hero {
string name;
int powerLevel;
public:
void getData() {
cout << "Enter hero name: "; cin >> name;
cout << "Power level (1-10): "; cin >> powerLevel;
}
void rankHero() {
cout << name << " -> ";
if (powerLevel <= 3)
cout << "Street Level" << endl;
else if (powerLevel <= 6)
cout << "City Level" << endl;
else if (powerLevel <= 9)
cout << "Planet Level" << endl;
else
cout << "Thanos-Snap Level" << endl;
}
};
int main() {
Hero h1;
h1.getData();
h1.rankHero();
return 0;
}
