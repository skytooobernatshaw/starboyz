#include <iostream>
using namespace std;
bool isValidAmount(double amount)
{
return amount > 0;
}
double addCoins(double balance, double coins)
{
return balance + coins;
}
double calculateValue(double coins, double price)
{
return coins * price;
}
int main()
{
double balance = 2.5;
double coins, price;
cout << "Enter coins to add: ";
cin >> coins;
cout << "Enter current coin price: ";
cin >> price;
if (isValidAmount(coins))

{
balance = addCoins(balance, coins);
cout << "Wallet coins = " << balance << endl;
cout << "Wallet value = "
<< calculateValue(balance, price) << endl;
}
else
{
cout << "Invalid coin amount." << endl;
}
return 0;
}
