#include<iostream>  

using namespace std;

int main(){
// what is array? - it is a collection of items of similar type stored in contigous location.
int marks[4] = {21 , 38, 85, 06, 12};

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
// you can change the value of array
marks[2] = 96;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

for (int i = 0; i < 5; i++)
{
    /* code */
    cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
}

int i = 0;
while (i<5)
{
    cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    i++;
}

//  Pointers and Arrays

int* p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<*p<<endl;

// cout<<"the value of *p is "<<*p<<endl;
// cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"the value of *(p+3) is "<<*(p+3)<<endl;


return 0;
}
