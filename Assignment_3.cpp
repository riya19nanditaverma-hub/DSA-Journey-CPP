#include<iostream>
using namespace std;
int main(){

    /*Q1
    int num;
    cout<<"ENTER A NUMBER- "<<endl;
    cin>>num;
    if(num==0){
        cout<<"NUMBER IS ZERO."<<endl;
    } else if (num >= 0){
        cout<<"NUMBER IS POSITIVE."<<endl;
    } else {
        cout << "NUMBER IS NEGATIVE."<<endl;
    } */



    /*Q2
    int year;
    cout<<"ENTER A YEAR- "<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"YES, IT IS A LEAP YEAR."<<endl;
    } else if (year%400==0){
        cout << "yes, it is a leap year."<<endl;
    } else {
        cout<<"IT IS NOT A LEAP YEAR."<<endl;
    }. */



    /*FIND THE VALUE OF X AND Y-
    int a= 63;
    int b= 36;
    bool x = (a < b) ? true : false;
    int y = (a > b) ? a : b;
    cout<< x<< "," << y<< endl;                 //x= 0 and y=63 thus answer is (0,63) */



    /*FIND THE OUTPUT- 
    int a= 5;
    if(++a*5 <= 25){
        cout<<"Hello\n";
    } else {
        cout <<"BYE\n";                        //output= Bye as dur to pre-incement the number becomes 6 and 6*5>25.
    }                                   */




    //ARMSTRONG NUMBER-
    int num;
    cout<<"ENTRE A THREE DIGIT NUMBER- "<<endl;
    cin>>num;
    int n= num; //creating a copy.

    int digit1= n%10;
    n /= 10;
    int digit2 = n %10;
    n /= 10;
    int digit3 = n;
    int cubeSum = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;
    if(cubeSum==num){
        cout << num << " is an Armstrong number\n";
    } else {
        cout << num <<" is not an armstrong number\n";
    }
    return 0;                                  
 } 


/* typedef keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to a more
meaningfull name. 
example- typedef int mylnt 
this allows us to declare new intergers using mylnt, instead of int. */

/* MACROS- can be of any type. Macros can even be any code block containing statements, loops, function call etc.
they are expanded by the preprocessor before compilation takes place. */

/* const keyword is used to define the constant vcalue that cannot be changed during the execution of the program.*/