/* #include<iostream>
#include<cmath>
using namespace std;
int main(){

    //Q1- wap to find the factorial of a no. entered by user.
    int n;
    cout<<"ENTER A NUMBER- "<<endl;
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        if((n==0)||(n==1)) {
            cout<<"1"<<endl;
        } 
        fact = fact * i;
    } cout<<fact<<endl;            
 */




    /*Q2- wap to input a number and check whether the number is an Armstrong number or not.
    int num=n;
    int dig1= num % 10;
    num = num / 10;
    int dig2= num % 10;
    num = num / 10;
    int dig3 = num;
    int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
   if(cubeSum == n){
    cout<<"YES, IT IS AN ARMSTRONG NUMBER.";
   } else {
    cout << "NO, IT IS NOT AN ARMSTRONG NUMBER.";
   }
        cout<<endl;             */


    
/*Q3- WAP TO PRINT THE MULTIPLICATION TABLE OF A NUMBER, ENTERED BY THE USER.
    for(int i=1; i<=10; i++){
        int table = (n * i);
        cout<<n<<"*"<<i<<"="<<table<<endl;
    } cout<<endl;           */



/*Q4- WAP TO PRINT ALL THE PRIME NUMBERS FROM 2 TO N.                      //doubt
#include<iostream>
using namespace std;
int main(){
int n;
bool isPrime=true;
cout<<"ENTRE THE VALUE OF N- "<<endl;
cin>>n;

for(int i=2; i<=n; i++){
        if(n % i==0){
            isPrime = false;
        } 
        if(isPrime){
            cout<< i << " ";
        }       
}
return 0;
}    */





/*Q5- wap that prints the first N fibonacci numbers. 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int first = 0; 
    int sec = 1;
    int third;
    cout<<"ENTER THE LAST TERM- "<<endl;
    cin>>n;
    cout << first << " " << sec << " ";
    for(int i=2; i<n; i++){
        int third = first + sec;
        cout<< third << " ";
        first = sec;
        sec = third;
    } cout<<"\n";
    return 0;
} */
