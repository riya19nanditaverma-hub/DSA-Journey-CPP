//Q1- to print prime numbers.
/*logic for prime numbers- 
1.for(int i=2; i<=(n-1); i++){
                (n % i==0) --> non-prime(false)}                      
                
2. for(int i=1; i<=sqrt(n); i++)                */
/* #include<iostream>                       //METHOD-1
using namespace std;                

bool isPrime(int n){                        //n->prime->true
   if(n==1){
    return false;
   }
for(int i=2; i<=n-1; i++){
        if(n % i == 0){
            return false;                   //non-prime
        }
    }
return true;
}

int main(){
    cout << isPrime(3) << endl;
return 0;
}               

#include<iostream>
#include<cmath>
using namespace std;                            //METHOD-2

bool isPrime(int n){
    if(n==1){
        return false;
    }
for(int i=2; i<=sqrt(n); i++){
    if(n % i == 0){                         //non-prime--> gives 0.
        return false;
    }
}  
return true;                                //prime--> 1
}

int main(){
    cout << isPrime(7) << endl;
    return 0;
}                           */





//Q2- Binomial coefficient where n and r is given. 
/* logic- 
binomial coefficient- nCr= n! / r! (n-r)!
*/

/*#include<iostream>
using namespace std;

int fact(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
return fact;    
}


int binCoeff(int n, int r){
    int value = fact(n);
    int value2= fact(r);
    int value3= fact(n-r);

    int result= value / (value2 * value3);
    return result;
}

int main(){
    cout << binCoeff(3,2) << endl;
     return 0;
}       */


//Q3- print all primes in the range from 2 to n.

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
       if(n % i == 0){
        return false;
       }
    }
    return true; 
}

void allPrimes(int n){
    for(int i=2; i<=n; i++){
        if( isPrime(i)){                            //function call inside if()
            cout<<i<<" ";
        }
    }

    cout<<endl;
}

int main(){
    allPrimes(100);
    return 0;
}