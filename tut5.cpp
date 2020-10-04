#include <iostream>
/*there are two types of header files
system header files comes with compiler and 
user defined header files written by programmer*/
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in c++" << endl;
    cout << "Following are the type of operators" << endl;
    //Arithematic operator
    cout << "The sum of a+b is " << a + b << endl;
    cout << "The sum of a-b is " << a - b << endl;
    cout << "The sum of a*b is " << a * b << endl;
    cout << "The sum of a/b is " << a / b << endl;
    cout << "The sum of a%b is " << a % b << endl;
    cout << "The sum of a++ is " << a++ << endl;
    cout << "The sum of a-- is " << a-- << endl;
    cout << "The sum of --a is " << --a << endl;
    cout << "The sum of ++a is " << ++a << endl;
    cout << endl;
    //Assignment operators- used to assign values to variables
    // int a = 4, b = 6;
    // char c ='v';

    //Comparison operators
    cout << "Following are the comparison operators" << endl;
    cout << "The value of a==b is" << (a == b) << endl;
    cout << "The value of a!=b is" << (a != b) << endl;
    cout << "The value of a>b is" << (a > b) << endl;
    cout << "The value of a<b is" << (a < b) << endl;
    cout << "The value of a<=b is" << (a <= b) << endl;
    cout << "The value of a>=b is" << (a >= b) << endl;
    cout << endl;

    //Logical operator
    cout << "Following are the logical operators" << endl;
    cout << "The value of ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl; //and
    cout << "The value of ((a==b) || (a<b)) is " << ((a == b) || (a < b)) << endl; //or
    cout << "The value of !a==b is" << (!a == b) << endl;                          //not
    cout << endl;

    return 0;
}