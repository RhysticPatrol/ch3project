#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

double Principle;
double Rate;
double t;

cout << "This program is to help you calculate your balance in your savings account.";
cout << "\nFirst, we will need you to enter your interest rate:";
cin >> Rate;
cout << "\nNext, we will need your balance in your savings account:";
cin >> Principle;
cout << "\nAlright, last thing! We need the number of times interest is compounded:";
cout << "\n(example if it is done quartly enter in 4)";
cin >> t;
cout << "Now we will find your new balance!:\n";
cout << Principle * (pow(( 1 + (Rate/t)),t));

return 0;
}
