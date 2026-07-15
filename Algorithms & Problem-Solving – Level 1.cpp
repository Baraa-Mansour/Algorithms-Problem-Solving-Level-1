// Imports
#include <iostream>
#include <string>

// Using namespaces
using namespace std;

// enums
enum enNumberType
{
    ODD = 1,
    EVEN = 2,
};

// Declaration
void printName(string name);
string readName();
int readNumber();
enNumberType checkEvenOdd(int number);
void printNumberType(enNumberType type);


int main()
{
    printNumberType(checkEvenOdd(readNumber()));

    return 0;
}

// proplem-1: print name in screen.
void printName(string name)
{
    cout << "your name is: " << name << endl;
    return;
}
// --

// proplem-2: Read name from user then print it
string readName()
{
    string name;

    cout << "enter your name: " << endl;
    getline(cin, name);

    return name;
}
// --

// proplem-3: read number then check if even or odd and print result
int readNumber()
{
    int number = 0;

    cout << "enter your number: " << endl;
    cin >> number;

    return number;
}
enNumberType checkEvenOdd(int number)
{
    if (number % 2 == 0)
    {
        return enNumberType::EVEN;
    }
    else
    {
        return enNumberType::ODD;
    }
}
void printNumberType(enNumberType type)
{
    switch (type)
    {
    case enNumberType::EVEN:
        cout << "EVEN" << endl;
        return;
    case enNumberType::ODD:
        cout << "ODD" << endl;
        return;
    default:
        cout << "UNKNOWN";
        return;
    }
}
// --

