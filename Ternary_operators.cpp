/* TERNARY OPERATOR- variable = condition ? statement1 : statement2;
ex- bool isAdult = (age >= 18) ? true : false;
*/

#include<iostream>
using namespace std;
int main(){
    /* bool isAdult;       //1,0
    int age;
    cout<<"ENTRE AGE- "<<endl;
    cin>>age;
    isAdult = age >= 18 ? true : false; */


    /*LARGEST OF TWO NUMBERS- 
    int a=5;
    int b=6;
    int largest = a>= b ? a : b;  
    cout << "largest of two numbers is- "<<largest<<endl; */


        //ODD OR EVEN-
        int num; 
        cout<<"ENTER A NUMBER- "<<endl;
        cin>>num;
        int number = num%2==0 ? true : false;       //1 will be printed when number is odd and 0 for even.
        cout<<"NUMBER IS- "<<number<<endl;
    return 0;
}
