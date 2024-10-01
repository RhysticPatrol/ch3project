#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    long double cookies;

    cout << "Hello! Please input how many cookies you would like to make:";
    cin >> cookies;
    cout << setprecision(2) << fixed << (cookies * sugar)/48 << " cups of sugar\n";
    cout << setprecision(2) << fixed << (cookies * butter)/48 << " cup of butter\n";
    cout << setprecision(2) << fixed <<  (cookies * flour)/48 << " cups of flour\n";

    cin.get();

    return 0;




}
