/*BREAK STATEMENT-
#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=5){
        if(i==3){
            break;              //we will get only 1 and 2.
        }
        cout<<i<<" ";
        i++;
    } cout<<endl;
return 0;
} */

/*WAP WHERE USER KEEP ENTERING NUMBERS TILL THEY ENTER A MULTIPLE OF 10.
#include<iostream>
using namespace std;
int main(){
   int n;
   
   do{
    cout<<"ENTER NUMBER- ";
    cin>>n;
    if(n % 10== 0){
        break;
    }
    cout<<"you entered- "<<n<<endl;
   } while (true);          //true or write 1>0 which is always true so the loop becomes infinte loop.
return 0;
}           */

/*CONTINUE STATEMENT- to skip an iteration. 
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        if(i==3){
            continue;                           //3 is skipped.
        }
        cout<<i<<" ";
    } cout<<endl;
return 0;
}                   */

/*WAP TO SHOW NUMBERS ENTERED BY USER EXCEPT MULTIPLES OF 10. 
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
    cout<<"ENTER THE VALUE OF n- ";                             //case of infinte loop.
    cin>>n;
    if(n % 10 == 0){
        continue;
    } 
    cout<<"YOUR NUMBER IS- "<<n<<endl;
}   while(1>0);
return 0;
}               */

//CHECK IF A NUMBER IS PRIME OR NOT-
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    /* int n;                           //method-1
    cout<<"ENTER NUMBER- "<<endl;
    cin>>n;
    bool isPrime = 1;                   //assume that the no. is prime.
    for(int i=2; i<=(n-1); i++){
        if(n % i==0){                   //i is a factor of n or i completely divides n, thus n is non-prime.
            isPrime = 0;
            break;
        }
    } if(isPrime == 1) {
        cout<<"YES, IT IS PRIME."<<endl;
    } else {
        cout<<"Number is not prime."<<endl;
    }
     return 0;
} */                                    

//method-2
int n;
cout<<"enter a number- "<<endl;          //case when (a*b) will have maximum value- (n)^1/2 * (n)^1/2
cin>>n;
bool isPrime = 1;                        //ex- 21- here (21)^1/2 = 4._ so we need to check for only 2,3,4 
for(int i=2; i<=sqrt(n); i++) {
    if(n % i ==0){
        isPrime = 0;
        break;
    } 
}   if(isPrime == 1){
    cout<<"YES, IT IS PRIME.";
} else {
    cout<<"NO, IT IS NOT PRIME.";
} cout<<endl;
return 0;
}
