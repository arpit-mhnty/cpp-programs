#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "the value of num1\n"; // '<<' is insertion operator//
    cin >> num1;                   // ">>" is extraction operator//
    cout << "the value of num2\n"; // '<<' is insertion operator//
    cin >> num2;                   // ">>" is extraction operator//
    cout << "the sum is " << num1 + num2;
    return 0;
}