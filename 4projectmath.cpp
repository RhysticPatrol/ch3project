#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int variableOne = rand() % 499;
    int variableTwo = rand() % 499;
    int Answer;

    cout << "Hello, this is a program designed to help with your math skills.";
    cout << "\nFirst we will give you two numbers to add together \nand you will be given 2 chances to answer correctly.";
    cout << "\n" << setw(5) << right << variableOne << "\n";
    cout <<"+"<< setw(4) << right << variableTwo <<"\n";
    cin >> Answer;
    if(Answer == variableOne + variableTwo){
        cout << "Good job!";
        cin.get();
    }

    else {
        cout << "try again:";
        cin >> Answer;

       if(Answer == variableOne + variableTwo){
        cout << "Good job!";
        cin.get();
       }
        else {
            cout << "nice try! the answer is:";
            cout << variableOne + variableTwo;
            cin.ignore();
        }
    } 
    
    return 0;
}