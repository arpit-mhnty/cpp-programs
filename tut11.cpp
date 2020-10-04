#include<iostream>

using namespace std;

int main(){

// What is pointer?----> data type which holds the address of other data types

int a = 3;

int* b = &a;

// & ----->  (address of) operator
cout<<"the address of a "<<b<<endl;
cout<<&a<<endl;

// * -----> (value at) derefrence operator
cout<<"the value at address b is "<<*b<<endl;

// Pointer to pointer
int** c = &b;
cout<<"Th address of b "<<&b<<endl;
cout<<"The address of b "<<c<<endl;
cout<<"The value at address c "<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) "<<**c<<endl;
return 0;
}  