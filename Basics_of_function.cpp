//functions- block of code which runs when it is called.
/* returnType fName(){
        //do something 
            return someValue;   //optional
    }
            
    fName();    //functioncall 
*/

/*#include<iostream>
using namespace std;
void printHello(){                      //printHello() is the function name thus FUNCTION DECLARATION or FUNCTION PROTOTYPE.
    cout<<"Hello:)\n";                  //FUNCTION DEFINITION or FUNCTION BODY- what function will do.
}

void assistant(){
    printHello();
    cout<<"work done\n";
}

int main(){                             //FUNCTION CALL 
    assistant();
    return 0;
}       */







/*Forward Declaration- 
declaration- the function's name, return type, and parameters (if any)
definition- the body of the function.  */

/* SYNTAX WITH PARAMETERS-
returnType fname(type param 1, type para2....){
                //do something
    return someValue;
}
    */





    /*#include<iostream>
using namespace std;

int sum(int a,int b=1){                                          //a , b are parameters
    int sum = a + b;
    return sum;
}

int diff(int a, int b=1){
    int diff= a - b;
    return diff;
}
                                            //if i write the default value of b=1 and also assign as- int s= (2,7) then complier uses the value 7 not the default value.
int main(){
    int d = diff(4);                                            //first parameter cannot be made default parameter.
    cout<<"DIFF = "<<d<<endl;
   int s= sum(2,4);                                           //2, 4 are arguments.
   cout<<"SUM = "<<s<<endl;     
   return 0;
}                */




/*#include<iostream>                            //product of two numbers.
using namespace std;
int product(int a , int b){
    int prod= a*b;
    return prod;
}

int main(){
    int p= product(4,6);
    cout<<"PRODUCT IS- "<<p<<endl;
    return 0;
}       */





/*#include<iostream>
using namespace std;
bool isEven(int n){                 //true--> 1 and false---> 0
    if(n%2==0){
        return true;                //check if a number is odd or even
    } else {
        return false;
    }
return 0;    
}

int main(){
    cout<<isEven(19)<<endl;
    return 0;
}           */





/*#include<iostream>
using namespace std;                //factorial problem

int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
cout<<"factorial is - "<<fact<<endl;    
return fact;    
}

int main(){
    fact(0);
    fact(1);
    fact(2);
    fact(3);
    fact(4);
    fact(5);
    fact(6);
    fact(7);
    fact(8);
    fact(9);
    fact(10);
    return 0;
}               */

/* FUNCTION CALL IN MEMORY- there are two types of memory- 
1. stack          
2.heap (dynamic allocation) 

stack- it is for static memory. one over another.whenever a function is executed stack forms a layer called stack frame where the complete fuction gets allocated i.e. the variables, 
functions,parameters, etc everything occupies space in this memory. 

Execution of any function starts from the main function.
current function is at the top of the stack. */


/* SCOPE- local vs global scope of variabes.
scope is an area where a variable can be accessed or used.

local scope variable- any variable defined in the fuction as seen in loop, if..else statements, any variables in {.}.*/

#include<iostream>
using namespace std;
void sum(int a, int b){
    int s= a + b;               //s is a local scope variable.
    cout<<s<<endl;
}
int main(){
    sum(4,6);
    return 0;
}

