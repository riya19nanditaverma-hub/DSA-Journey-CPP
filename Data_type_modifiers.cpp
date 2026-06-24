/*DATA TYPE MODIFIERS- they are used to alter the meaning of the existing data type. 
1. long- >=4bytes (more than int).                      used with int and double.
2. short- 2bytes.                                       used with 
3. signed- signed int is same as int.
4. unsigned- can only store non-negative numbers.       here the range of positive numbers increases.
5. long long- same as long long int.

int = -2^31 to 2^31-1 ---> range. 
first bit of int is called MSB(most significant bit) this tells about the numbers stored in all the bits. 
if the value of MSB is 0 then rest of the spaces has positive bits value and if MSB=1 then rest is negative.
to store negative values in the bits we use its 2's complement. 
*/





#include <iostream>
using namespace std;

int main(){
    long long x=15;                                 //for compiler it is implicitly int value. 
    cout<<sizeof(int short)<<endl;
    cout<<sizeof(long long)<<endl;
return 0;
}


