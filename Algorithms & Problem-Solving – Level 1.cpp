// Imports
#include <iostream>
#include <string>
#include <cmath>


// Using namespaces
using namespace std;


// Struct
struct stDriverInfo 
{
    int Age;
    bool HaveDriverLicense;
    bool HaveRecommendation;
};
struct stInfo
{
    string firstName;
    string lastName;
};


// enums
enum enNumberType
{
    ODD = 1,
    EVEN = 2,
};


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
// END

// proplem-6: read first/last name then print fullname
stInfo readInfo()
{
    stInfo info;

    cout << "Enter first name: " << endl;
    getline(cin, info.firstName);

    cout << "Enter last name: " << endl;
    getline(cin, info.lastName);

    return info;
}
string getFullName(stInfo info)
{
    return info.firstName + " " + info.lastName;
}
// END

// Proplem-7: read number then print its half
float halfOfNumber(int number)
{
    float half = 0;
    half = number / 2.0;
    return half;
}
void printMessage(string message)
{
    cout << message << endl;
}
// END

// proplem-8: get grade the print pass if > 50 else fail
bool isPass(int grade)
{
    return grade > 50;
}
void printStudentStatus(bool isPass)
{
    if (isPass)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}
// END

// proplem-9: read 3 numbers then print there sum
void readNumbers(int& num1, int& num2, int& num3)
{
    cout << "enter num1: " << endl;
    cin >> num1;
    cout << "enter num2: " << endl;
    cin >> num2;
    cout << "enter num3: " << endl;
    cin >> num3;
}
int sumOfThreeNumbers(int num1, int num2, int num3)
{
    int result = num1 + num2 + num3;

    return result;
}
// END

// proplem-10: read 3 number then print there avg
float avgOfThreeNumebrs(int num1, int num2, int num3)
{
    int sum = sumOfThreeNumbers(num1, num2, num3);
    float avg = (float)sum / 3;

    return avg;
}
// END

// proplem-11: check if avg pass or fail
// solution: just put the avg in isPass and then preintStudentStatus


// proplem-12: read two number then print max of them
int max(int num1, int num2)
{
    return num1 >= num2 ? num1 : num2;
}
// END

// proplem-13: max of three number
int max(int num1, int num2, int num3)
{
    int temp = max(num1, num2);
    int result = max(temp, num3);

    return result;
}
// END

// proplem-14: read two numbers then swap them
void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
// END

// proplem-15: rectangle area
float rectangleArea(float width, float hight)
{
    return (float)width * hight;
}
// END

// proplem-16: rectangle area by side and diagonal 
float rectangleAreaBySideAndDiagonal(float side, float diagonal)
{
    float result = side * sqrt(pow(diagonal, 2) - pow(side, 2));

    return result;
}
// END

// proplem-17: Computes the area of a triangle given its base and height
float triangleAre(float base, float height)
{
    float result = (float)((float)1 / 2) * base * height;

    return result;
}
// END

// proplem-18: Computes the area of a circle given its radius
float circleArea(float R)
{
    const float PI = 3.141592653589793238;
    float result = PI * pow(R, 2);

    return result;
}
// END

// propllem-19: Computes the area of a circle given its diameter using the formula: (π * D²) / 4
float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;

    float Area = (float)(pow(D, 2) * PI) / 4;

    return Area;
}
// END

// proplem-20: Computes the area of a circle that is inscribed inside a square using the formula: (π * A²) / 4
float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;

    float Area = (float)(PI * pow(A, 2)) / 4;

    return Area;
}
// END

int main()
{
    int num1 = readNumber();
    int num2 = readNumber();
    printMessage(to_string(CircleAreaInscribedInSquare(num1)));

    return 0;
}
