#include<iostream>

using namespace std;

int main(){
/* Loops in c++
There are 3 types of loops
1. for loop in c++


int i = 1
cout<<i;
i++;*/
 
 /*syntax of for loop

 for (intialization; condition; updation)
 {
     loop body(code);
 }
*/

// for (int i = 1; i<=100; i++)
// {
//     cout<<i<<endl;

// }

//example of infinite for loop

// for (int i = 1; 34<=100; i++)
// {
//     cout<<i<<endl;

// }


/* 2. while loop

syntax of while loop
while(conditiom)
{
    c++ statements;
}
*/
// int i = 1;
// while(i<40){
//     cout<<i<<endl;
//     i++;
// }

//example of infinite for loop

// int i = 1;
// while(true){
//     cout<<i<<endl;
//     i++;
//}




// 3. do-while loop
//Syntax of do-while loop
 
// do
// {
//     c++ statements;
// } while (condition);

// int i = 1;
// do
// {
//     cout<<i<<endl;
//     i++;
// } while (i<45);

int i = 0;
do
{

    cout<<i*6<<endl;
    i++;

}while(i<=10);




    return 0;
}