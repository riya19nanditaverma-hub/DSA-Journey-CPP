/* Q1- TELL THE OUTPUT.
#include<iostream>
using namespace std;

int main(){
    int x;
    int *ptr;
    x=7;
    ptr = &x;
    cout << ptr << endl;
    cout << &x <<endl;
    cout << x << endl;
    return 0;
}
OUTPUT- &x == 7   */





/*Q2- TELL THE OUTPUT.
#include<iostream>
using namespace std;

void multipleBy(int &a, int &b, int &c){            //a,b,c is the alias for the original value passed by the main function.
    a = a*2;                                        //a refers to x, b to y and c to z.
    b *= 2;                                         //call by reference.
    c *= 2;
}

int main(){
    int x = 1, y=2, z = 3;
    multipleBy(x, y,z);
    cout << x << y << z<<endl;
    return 0;
}
//initially a = 1, so a =a*2 == 2 similarly with b and c. 
output => a=2, b=4, c=6. thus ans==246 */






//Q3 - TELL THE OUTPUT OF THE CODE- 
#include<iostream>
using namespace std;
int main(){
int a = 32;
int *ptr = &a;
char ch = 'A';                  //ASCII of 'A' = 65
char &cho = ch;                     // ch and cho - same memory means reference. 
cho += a;
*ptr += ch;
cout << a << " , " << ch << endl;
return 0;
}