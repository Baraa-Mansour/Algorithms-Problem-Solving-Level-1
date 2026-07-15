// Imports
#include <iostream>
#include <string>

// -----------------------------------------

// Using namespaces
using namespace std;

// -----------------------------------------

// Struct
struct stDriverInfo 
{
    int Age;
    bool HaveDriverLicense;
    bool HaveRecommendation;
};

// -----------------------------------------

// enums
enum enNumberType
{
    ODD = 1,
    EVEN = 2,
};

// -----------------------------------------

// proplem-1: print name in screen.
void printName(string name)
{
    cout << "your name is: " << name << endl;
    return;
}
// END

// proplem-2: Read name from user then print it
string readName()
{
    string name;

    cout << "enter your name: " << endl;
    getline(cin, name);

    return name;
}
// END

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
// END

/* proplem - 4+5: 
* 4:
* -user should enter age and if have driver license
* -print 'hired' if age > 21 and have license 
* -else print 'rejected'
* 5:
* -enter if have recommendation
* -pass if have recommendation
*/
stDriverInfo readDriverInfo()
{
    stDriverInfo info;
    string answer = "Y";

    cout << "enter age" << endl;
    cin >> info.Age;
    cout << "have license? (Y or N)" << endl;
    cin >> answer;
    cout << "have recommendation? " << endl;
    cin >> info.HaveRecommendation;

    answer == "Y" || "y" ? info.HaveDriverLicense = true : info.HaveDriverLicense = false;

    return info;
}
bool validDriver(stDriverInfo info)
{
    return info.HaveRecommendation || (info.Age > 21 && info.HaveDriverLicense);
}
void printDriverResult(stDriverInfo info)
{
    if (validDriver(info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

// -----------------------------------------

int main()
{

    printDriverResult(readDriverInfo());
    return 0;
}
