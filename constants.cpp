//CONSTANTS- variables whose values cannot be changed. We use the keyword 'const' to declare a constant variable.
/* #include<iostream>
using namespace std;
int main(){
    const int num= 25;              //initializing the value of constant variable at the time of declaration is mandatory.
    int num2= 25;
    num2= 30;
    num = 30;                       //error- assignment of read-only variable 'num' as it is a constant and cannot be changed. 
    return 0;
} */

//MACROS- symbolic constants. We use the keyword '#define' to declare a macro constant. It is a preprocessor directive.

#include<iostream>
#define X 25   
#define ll long long                     //constant occupy space in memory but macro does not occupy space in memory. 
using namespace std;

int main(){
    ll x;
    ll y= 25;
    const int Y= 35;
    cout<<Y<<endl;
    return 0;
}
