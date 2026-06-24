/* TYPE CASTING- conversion of data from one type to another. 
IMPLICIT CONVERSION- (automatic / type promotion) done by the compiler to avoid data loss. Always done from smaller to bigger data type.
EXPLICIT CONVERSION- (type casting) done by the programmer to convert data from one type to another. Always done from bigger to smaller data type. 
A= 65, B= 66, C= 67, D= 68, .... AND a = 97, b = 98, c = 99, d = 100, ....*/

/* #include<iostream>
using namespace std;
int main(){
    cout<< (10/3)<<endl;
    cout << (10/3.0)<<endl;
    cout<< ('A'+ 1)<<endl;
    return 0;
} */

//EXPLICIT CONVERSION- 
#include<iostream>
using namespace std;
int main(){
    float PI = 3.14;
    cout<<(int)(PI)<<endl;
    cout<< (int)('A')<<endl;
    cout<<((float)10/3)<<endl;
    cout<<(char('A'+1))<<endl;
    return 0;
}

