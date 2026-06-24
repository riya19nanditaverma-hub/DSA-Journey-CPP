/* FOR LOOP- 
for(initialisation; condition; updation){
                        //do something
                        } */
//iteration- run and iterator- loop variable / counter variable.
//increasing order: i++ and decreasing order: i--

/* #include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        cout<<i <<" "<<endl;
    }       
return 0;
} */

    /*PRINT APNA COLLEGE 5 TIMES-
    for(int i=1; i<=5; i++){
        cout<<"APNA COLLEGE"<<endl;
    }               


     int n;
    cout<<"ENTRE THE VALUE OF n- "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;     */    

  
//print sum of first n natural numbers- 
   /* #include<iostream>
    using namespace std;
    int main(){
    int n;
    int sum=0;
    cout<<"ENTER THE VALUE OF n- "<<endl;
    cin>>n;
    for(int i=1; i<=n; i=i+1){
        sum=sum+i;
        }
    cout<<sum<<endl;        
    return 0;
    }    */           


/*WHILE LOOP- 
int count=1; //initialising
while(count < 3){
count << count;
count++; //updation
}           */


/*print square pattern using loops-
#include<iostream>
using namespace std;
int main(){
    for(int x=1; x<=4; x++){
        cout<<" * * * * "<<endl;;
    } 
    return 0;
}       */

/*print numbers from n to 1 using for loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n- ";
    cin>>n;
    for(int i=n; i>=1; i--){
        cout<<i<<endl;
    }
    return 0;
}               */


//print the sum of digits using while loop- 10829
//HINT: last digit ke liye trick: number % 10 -> last digit.
//kisi bhi no. ka last digit hatana ho --> divide by 10.
//kisi bhi number ka last digit lana ho --> modulo by 10.

/* #include<iostream>
using namespace std;
int main(){
    int n= 10829;
    int digitsum=0;
    //lastdigit= n%10;
    //sum = sum+lastdigit
    while(n>0){
        int lastdigit = n % 10;
        cout << lastdigit <<" ";
        digitsum += lastdigit;
        n = n/10;
    } cout<< " sum = "<<digitsum<<endl;
    cout << endl;
    return 0;
}  */

/*PRINT THE SUM OF ODD DIGITS OF A NUMBER-
#include <iostream>
using namespace std;
int main(){
    int n=10829;
    int digitsum = 0;
    while(n>0){
        int lastdigit = n % 10;
        if(lastdigit % 2 !=0){
        digitsum += lastdigit;
        }
        n = n / 10;

    } cout << "sum = "<<digitsum<<endl;
 cout<<endl;
return 0; 
} */


/*PRINT THE DIGITS OF A GIVEN NUMBER IN REVERSE ORDER USING WHILE LOOP.
#include<iostream>
using namespace std;
int main(){
    int n;
    int lastdigit;
    cout<<"ENTER A NUMBER- ";
    cin>>n;
    while(n > 0){
        lastdigit = n % 10;
        cout<<lastdigit<<endl;
        n = n / 10;
    } cout<<endl;
    return 0;
}       */


//REVERSE A NUMBER AND THEN PRINT THE RESULT-
//to store the reverse of a number in result- result = result * 10 + lastdigit. 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTRE A NUMBER- "<<endl;
    cin>>n;
    int result=0;
    int lastdigit;
    while(n>0){
        lastdigit = n % 10;
        result = result * 10 + lastdigit;
        n = n / 10;
    } cout <<"reverse= "<<result<< endl;
    return 0;
}
 concept of the above question-
n= 10829                (1*10^0 + 0*10^1 + 8*10^2 + 2*10^3 + 9*10^4)
res=0           0 * 10 + 9 = 9
res=9           9 * 10 + 2= 92 
res=92          92 * 10 + 8=928
res=928         928 * 10 + 0= 9280
res=9280        9280 * 10 + 1= 92801.  */

//CONCEPT OF DO..WHILE LOOP-   (work gets done atleast once irrespective of condition)
/*do{
        //do something
}       while(condition);
       */

#include<iostream>
using namespace std;
int main(){
    /*int i=1;
    int value=1;
    do{
        cout<<"apna college in do-while loop."<<endl;
    } while(value>5);
    cout<<endl;                                         //the condition is false but in case of do..while prgm gets executed only once.

while(value>5){
    cout<<"apna college in while loop.";
} cout<<endl; */




int i=1;
do{
    cout<<i<<" ";
    i++;
} while (i<=5);
cout<<endl;
    return 0;
}
