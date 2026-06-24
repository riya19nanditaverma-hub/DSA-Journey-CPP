/* in memory- every number is stored in the memory with some address which has the following format- 0x___(some numbers) and this is in the form of hexadecimal 
numbers. In hexadecimal no. system we have 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F. ===>> (0 to 9) and (a to f).

ADDRESS OF OPERATOR- (&)- It gives the addressof a variable.
In C++ we have two types of usage of '&' as- 
1. addressof variable
2. bitwise and 

*/

/*#include<iostream>
using namespace std;

int main(){
    int a=10;
    float pi= 3.14;
    int *ptr = &a;
    float *ptr2 = &pi;

    //to create pptr-
    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << endl;

    // cout << &a << " = " << ptr << "\n";
    // cout << &pi << " = " << ptr2 << "\n";
    // cout<<sizeof(ptr)<<endl;
    // cout << sizeof(ptr2)<<endl;
    return 0;
}       */
        

/*POINTERS- a special variable that stores address of another variable.
ex- int *ptr = &a;  

NOTE- int* ptr = int *ptr = int * ptr.
*/   

/* Dereference Operator- gets the value of the variable pointed by any pointer. * operator lets us directly access and modify the value of variable. 

uses of * opeartor- 
1. multiplication 
2. declare a pointer
3. de-reference a variable.



*/

/*#include<iostream>
using namespace std;

int main(){
    int a= 4;
    int *ptr = &a;
    cout << ptr << "\n";                             //gives address of a 
    cout << *ptr << "\n";                            //using dereference variable along with &a gives the value of a. 
    *ptr = 20;                                      //dereference variable helps to modify the value of variable.
    cout << a << "\n";
    return 0;
}   */












/*NULL POINTER- we assign null value to a pointer to show that it doesn't point to any location. 
int *ptr = NULL;                        //address = 0
de-reference null ptr is not possible as it'll result in error.
*/

/*#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout << ptr << endl;
    cout << *ptr << endl;                   //segmentation error

    cout << "bye" << endl;                  //due to error it is not executed
    return 0;
}       */











/*WAYS OF PASSING ARGUMENTS- 
1. PASS BY VALUE- when parameter is a copy of actual argument variable in memory.                       
2. PASS BY REFERENCE (pass by address)- when we pass the reference of argumen to the function.--- by using pointers or by using reference 

*/

/*#include<iostream>                                  //call by value.
using namespace std;                               //here a copy of 'a' is made in the fuction and as 'parameter' and then the control comes back to the main function.
void changeA(int parameter){
    parameter = 20;
    cout << parameter << "\n";
}

int main(){
    int a=10;                                      
    changeA(a);
    cout << a << "\n";
    return 0;
}           */














#include<iostream>                                  //call by reference method 
using namespace std;                                /*in the main fuction we have a variabke 'a' and in the stack changeA we will pass the '&a' then get it stored in some pointer.this pointer
                                                                            gives the changes in the original value of 'a'.         */



// void changeA(int *ptr){                                                     //pass by reference using pointer.                             
//     *ptr = 20;
//     cout << *ptr << endl;
// }


void changeA(int &a){                                //pass by reference using reference.                          
    a = 20;                                         //reference variable is a. 
    cout << a << endl;
}


int main(){
    int a= 10;
    // int &b = a;
    // b = 25;
    // cout << b << endl;
    cout << a << endl;
    // changeA(&a);
    // cout << a << endl;
    return 0;
}       


/* REFERENCE VARIABLE- reference variable is an alternate name (alias) of already existing variable. 
int a = 5;
int &b = a;

here, a and b refer to the same location in the memory. changes made to any, either a or b will result in the same. when the work will be done the reference 
variable will be deleted from the memory. reference variable always needs to be initialised.  
*/

