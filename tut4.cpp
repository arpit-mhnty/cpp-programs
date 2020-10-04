#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum;
    sum = num1 + num2;
    cout << "the value of num1"<<endl;// '<<' is insertion operator//
    cin >> num1;                   // ">>" is extraction operator//
    cout << "the value of num2"<<endl; // '<<' is insertion operator//
    cin >> num2;                   // ">>" is extraction operator//
    cout << "the sum is " << sum;
    return 0;
}
