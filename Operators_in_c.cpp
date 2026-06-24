/* Operators- Symbols that tell compiler to perform some operation. 
TYPES OF OPERATORS- 
1. Arithematic Operators.
2. Assignment Operators.
3. Relational Operators.
4. Logical Operators.
5. Bitwise Operators. */

/* ARITHEMATIC OPERATORS- They are of two types- 
1. BINARY- addition, subtraction, multiplication, division and modulo.  (binary means it needs 2 operands.)
2. UNARY- increment(++) and decrement(--).                            ++a - pre-increment(update and then use)
     a++ means post-increment (use and then update). */

 #include<iostream>
using namespace std;
int main(){

    //Arithematic Operators.
    /* int a=5, b=4;
    cout<< "+ " << (a+b)<<endl;
    cout << "- " << (a-b )<< endl;
    cout<<"* "<<(a*b)<<endl;
    cout<<"/ "<<(a/b)<<endl;
    cout<<"% "<<(a%b)<<endl; 
    int i=3;
    ++i; //or i++
    cout<<"i= "<< i <<endl;
    int b = 5;
    --b;
    cout<<"b= " << b <<endl; 

    //ASSIGNMENT OPERATOR- 
    int a = 10 ; 
    a +=5;                      //a=a+5
    cout<< "a= "<<a<<endl;      //15
    a -=5;                      //a=a-5
    cout<< "a= "<<a<<endl;      //5
    a *=5;
    cout<<"a= "<<a<<endl;       //50
    a /=5;
    cout<<"a= "<<a<<endl;       //2.  (iske just upar a=50 hai and jab 50/5 we get 10.) 

    //RELATIONAL OPERATORS -> T / F
    int a= 3; 
    int b= 5; 
    cout<<(a>b)<<endl;      //FALSE (0)
    cout<<(a<b)<<endl;      //TRUE(1)
    cout << (a>=b)<<endl;   //0
    cout<<(a<=b)<<endl;     //1
    cout<<(a==b)<<endl;     //0
    cout<< (a!=b)<<endl;    //1 */

    //LOGICAL OPERATORS- 
    int a = 5;
    int b= 4;
    cout<< ((a>b) && (a>=b))<<endl;
    cout << ((a*b<=a) && (a-b<a))<<endl; 
    cout << ((a>b)|| (a<=b)) <<endl;
    cout << (!(3<5)) <<endl;
    return 0;
    }      
    

/* ASSIGNMENT OPERATOR or COMPOUND ASSIGNMENT OPERATORS (used to assign some values) - 
1. = 
2. +=
3. -=
4. *=
5. /=.      

a= a + 5 can also be written as a += 5. */

/*RELATIONAL OPERATORS- tell relaton between two values. 
1. >=
2. <=
3. <
4. >
5. == (equal to)
6. != (not equal to)  */

/* LOGICAL OPERATORS- 
1. AND (&&)                 (binary operator)
2. OR (||)                  (binary operator)
3. NOT (!).                 (unary operator). */
