#include<iostream>

using namespace std;

int main()
{
    // cout<<"this is tutorial 8";
   int age;

   cout << "What is your age?" <<endl;
   cin >> age;



// ***************selection control structure: if else-if else ladder


    if ((age<18) && (age>1))    
    {
        cout<<"you cannot come to aur party"<<endl;
    }

    else if(age==18)
    {
      cout<<"you can come to our kidszone party"<<endl;
    }
    
    else if (age<1)
    {
        cout<<"you are not yet born";
    }
    else
    {
       cout<<"YES YOU CAN COME TO OUR PARTY"<<endl;
    }
   
   
   // ***************selection control structure: switch case statement

   switch (age)
   {
    case 18:
        cout<<"you are 18"<<endl;
        break;

    case 22:
        cout<<"you are 22"<<endl;
        break;

    case 3:
        cout<<"you are 3"<<endl;
        break;

    default:
        cout<<"no special cases"<<endl;
        break;


       
   }

    return 0;
}
