/*  DATA TYPES are of two types- 
1. PRIMITIVE DATA TYPES
2. NON-PRIMITIVE DATA TYPES

PRIMITIVE- int(4 bytes), char(1 byte), bool(1 byte), float(4 bytes), double(8 bytes).
NON-PRIMITIVE- string, array etc. 
1 BYTE = 8 BITS */

//TO FIND SIZE OF DATA TYPES-
/* #include <iostream>
using namespace std;
int main(){
    int age = 55;
    int marks = -200;
    char grade= 'A'; 
    bool isAdult = true;
    float cgpa= 9.5;
    double price= 99.99;
    cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;
    return 0;
} */

/* For storing any value in character data type we use single quotes(''). 
BOOLEAN DATA TYPE- stores either true or false. 
bool: true=1 and false=0 */

#include<iostream>
using namespace std;
int main(){
    float PI = 3.14159265359;
double PI2 = 3.1415926535897932384626433832795;
cout<<"PI ="<<PI<<endl;
cout<<"PI2 ="<<PI2<<endl;
return 0;
}
