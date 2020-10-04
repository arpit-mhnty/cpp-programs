#include <iostream>

using namespace std;
int glo = 32;
void sum()
{
    int a;
    cout << glo;
}
int main()
{
    int a = 2, b = 4;
    float pi = 3.14;
    char c = 'U';
    int glo = 45;
    bool is_true = true;
    sum();
    cout<<"\nthis is tutorial 3. \n\nHere the value of a is "<<a<<". \nHere the value of b is"<<b;
    cout<<"\nthe value of pi is "<<pi;
    cout<<"\nthe value of c is "<<c<<endl;
    cout << is_true;
    return 0;
}