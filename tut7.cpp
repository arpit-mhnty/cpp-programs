#include<iostream>
#include<iomanip>


using namespace std;

int main(){
// constants in c++
//  const int a = 45;
//  cout<<"value"<<a<<endl;
//  a = 43; // you will get an error because a is constant
//  cout<<"value"<<a;

//Manipulators

int a = 34, b = 343, c = 3434;
cout<<"the value is "<< setw(4)<<a<<endl;
cout<<"the value is "<< setw(4)<<b<<endl;
cout<<"the value is "<< setw(4)<<c<<endl;


//Operator precedence
int a = 3, b = 2;
int c = ((((a*5)+b)-45)+87);
    return 0;
}