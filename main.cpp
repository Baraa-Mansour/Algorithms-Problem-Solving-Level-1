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
struct stPiggyBankContent
{
    int Pennies = 0, // pennis = 1
        Nickels = 0, // nickels = 5
        Dimes = 0, // dime = 10
        Quarters = 0, // quarter = 25
        Dollars = 0; // dollar = 100
};
struct stTimeDuration
{
    int days = 0, hours = 0, minutes = 0, seconds = 0;
};

// enums
enum enNumberType
{
    ODD = 1,
    EVEN = 2,
};
enum enOperationType
{
    Add = '+', 
    Subtract = '-', 
    Multiply = '*', 
    Divide = '/'
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

// proplem-21: Computes the area of a circle given its circumference using the formula: Area = (L²) / (4π)
float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;

    float Area = pow(L, 2) / (4 * PI);

    return Area;
}
// END

// proplem-22: Computes the area of a circle inscribed in an isosceles triangle using a specific formula.
float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;

    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}
// END

// proplem-23: Computes the area of a circle inscribed in a triangle using the formula:
//          Area = π * (T²), where T = (ABC) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))
float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.141592653589793238;

    // P = (A + B + C) / 2.
    float P = (A + B + C) / 2;

    // T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    // Area = π * T².
    float Area = PI * pow(T, 2);

    return Area;
}
// END

// proplem-24: Checks if a given number falls within a specified range
bool validateNumberInRange(int number, int from, int to)
{
    return (number >= from) && (number <= to);
}
// END

// proplem-25: Repeatedly prompts the user to enter an age until it falls within the valid range
int ReadUntilAgeBetween(int from, int to)
{
    int age = 0;
    do
    {
        age = readNumber();
    } while (!validateNumberInRange(age, from, to));

    return age;
}
// END

// proplem-26: Prints numbers from 1 to N using a while loop
void PrintRangeFrom1toN_UsingWhile(int number)
{
    int counter = 1;

    while (counter <= number)
    {
        cout << counter << endl;
        counter++;
    }
}
// END

// proplem-27: Prints numbers from N to 1 using a do-while loop
void PrintRangeFrom1toN_UsingDoWhile(int number)
{
    int counter = number;

    do
    {
        cout << counter << endl;
        counter--;

    } while (counter >= 1);
}
// END

// proplem-28: Prints numbers from N down to 1 using a for loop
void PrintRangeFromNto1_UsingFor(int number)
{
    for (int i = number; i >= 1; i--)
    {
        cout << i << endl;
    }
}
// END

// proplem-29: Computes the sum of all odd numbers from 1 to N using a while loop
int SumOddNumbersFrom1toN_UsingWhile(int number)
{
    int result = 0;

    while (number > 0)
    {
        if (checkEvenOdd(number) == enNumberType::ODD)
            result += number;

        number--;
    }

    return result;
}
// END

// proplem-30: Computes the sum of all even numbers from 1 to N using a do-while loop
int SumEvenNumbersFrom1toN_UsingDoWhile(int number)
{
    int result = 0;

    do
    {
        if (checkEvenOdd(number) == enNumberType::EVEN)
            result += number;
        number--;
    } while (number > 0);

    return result;
}
// END

// proplem-31: Read positive number then get factorial
int readPositiveNumber()
{
    int number = 0;

    do
    {
        number = readNumber();
    } while (number < 0);

    return number;
}
int factorial(int number)
{
    int factorial = 1;
    for (int i = number; i > 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}
// END

// proplem-32: Computes the power of a given number using an iterative loop
int PowerOfM(int number, int power)
{
    int result = 1;

    while (power > 0)
    {
        result *= number;
        power--;
    }

    return result;
}
// END

// proplem-33: 
// -Prompts the user to enter a grade within a specified range and ensures valid input
// -Determines the letter grade corresponding to the numeric grade
int ReadNumberInRange(int from, int to)
{
    int number = 0;

    do
    {
        string message = "Enter number between (" + to_string(from) + ", " + to_string(to) + ")";
        cout << message << endl;
        cin >> number;
    } while (number > to || number < from);

    return number;
}
char GetGradeLetter(int number)
{
    if (number >= 90)
        return 'A';
    else if (number >= 80)
        return 'B';
    else if (number >= 70)
        return 'C';
    else if (number >= 60)
        return 'D';
    else if (number >= 50)
        return 'E';
    else
        return 'F';
}
// END


// proplem-34: 
// -prompts the user to enter the number of different coins and dollar bills in the piggy bank
// -get total dollars and Pennies
stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter the total number of Pennies: " << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "Please enter the total number of Nickels: " << endl;
    cin >> PiggyBankContent.Nickels;
    cout << "Please enter the total number of Dimes: " << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "Please enter the total number of Quarters: " << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "Please enter the total number of Dollar bills: " << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}
float GetTotalPennies(stPiggyBankContent content)
{
    float total = 0;

    total += content.Pennies;
    total += (float)content.Nickels * 5;
    total += (float)content.Dimes * 10;
    total += (float)content.Quarters * 25;
    total += (float)content.Dollars * 100;

    return total;
}
float GetTotalDollars(stPiggyBankContent content)
{
    float totalPennies = GetTotalPennies(content);

    float totalDollars = totalPennies / 100;

    return totalDollars;
}
// END

// proplem-35: get two number and operation from user then calculate the result 
enOperationType ReadOperation()
{
    char operation = '+';

    cout << "select Operation: " << endl;
    cout << "Add: +" << endl;
    cout << "Subtract: -" << endl;
    cout << "Multiply: *" << endl;
    cout << "Divide: /" << endl;
    cin >> operation;

    return (enOperationType)operation;
}
float Calculate(int num1, int num2, enOperationType op)
{
    switch (op)
    {
    case Add:
        return num1 + num2;
        break;
    case Subtract:
        return num1 - num2;
        break;
    case Multiply:
        return num1 * num2;
        break;
    case Divide:
        return num1 + num2;
        break;
    default:
        return num1 + num2;
        break;
    }
}
// END

// proplem-36: sum user input until input = -99
int SumNumbers()
{
    int result = 0;
    int input = -99;

    do
    {
        input = readNumber();

        result += input;
    } while (input != -99);

    return result + 99; // add 99 cause the last user input is -99 and will sum to result
}
// END

// proplem-37: check if prime number
bool isPrime(int number)
{
    int half = (number / 2); // number cant divide on number bigger than its half
    for (int i = 2; i <= half; i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
} 
// END

// proplem-38: take task time duration and calculate its time per seconds
stTimeDuration ReadTimeDuration()
{
    stTimeDuration duration;

    cout << "Enter (days, hours, minutes, seconds): " << endl;
    cin >> duration.days;
    cin >> duration.hours;
    cin >> duration.minutes;
    cin >> duration.seconds;

    return duration;
}
float GetDurationInSeconds(stTimeDuration duration)
{
    float seconds = duration.seconds;

    seconds += duration.minutes * 60;
    seconds += duration.hours * 60 * 60;
    seconds += duration.days * 60 * 60 * 24;

    return seconds;
}
// END

// proplem-39: print letters from A to Z
void PrintLettersFromAtoZ()
{
    for (int i = 65; i < 91; i++)
        cout << (char)i << endl;
}
// END

// proplem-40: get PIN until its = 1234 then print balance
bool CheckPin(int pin)
{
    return pin == 1234;
}
bool ReadPin()
{
    int pin = 0;
    do
    {
        pin = readNumber();

        if (CheckPin(pin))
            return true;
        else
        {
            system("color 4F");
            cout << "wrong!" << endl;
        }
        
    } while (true);

    return false;
}
// END

int main()
{
    if (ReadPin())
    {
        system("color 2F");
        cout << to_string(7150) << endl;
    }

    return 0;
}
