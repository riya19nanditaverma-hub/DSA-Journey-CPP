/*Q1- What will ptr2 refer to ?? --> ptr2 = &x

#include<iostream>
using namespace std;

int main(){
    int x= 5, y=10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;
    cout << ptr2 <<endl;
    cout << ptr1 << endl;
    cout << &x << endl;
    return 0;
}           
*/





//Q2- what is the type of a & b-     float* a, b;
//ans- 'a' is a pointer of floating value while 'b' is a floating value but not a pointer.




//Q3- can we initialized a pointer with value 0 ? ---->  yes, same as a null pointer. 
#include<iostream>
using namespace std;

int main(){
    int *ptr = 0;
    cout << ptr << endl;
    return 0;
}