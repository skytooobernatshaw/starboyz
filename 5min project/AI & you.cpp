#include <iostream>
using namespace std;
bool humanVerified(char checked, char source)
{
return checked == 'y' && source == 'y';
}
bool shouldAcceptSuggestion(bool verified, int confidence)
{
return verified && confidence >= 70;
}
int main()
{
char checked, source;
int confidence;
cout << "Did you check the AI answer? (y/n): ";
cin >> checked;
cout << "Did you consult a reliable source? (y/n): ";
cin >> source;
cout << "Your confidence level (0-100): ";
cin >> confidence;
bool verified = humanVerified(checked, source);
if (shouldAcceptSuggestion(verified, confidence))
cout << "Use the AI suggestion after human judgment." << endl;
else
cout << "Do not accept it blindly. Investigate further." << endl;
return 0;
}
