/*#include<iostream>
using namespace std;                                //binary to decimal- for this we need to find the lastdigit of each number and then mutliply it as with 2^0, 2^1,...

void binaryTOdecimal(int binNum){
    int n= binNum;
    int decNum= 0;
    int pow = 1;                //2^0
    while(n>0){
        int lastdig = n % 10;
       decNum = decNum + lastdig * pow;
       pow = pow * 2;
        n = n / 10;
    }
    cout<< decNum << endl;
}

int main(){
    binaryTOdecimal(1011);
    return 0;
}               */



#include<iostream>  
#include<cmath>                            //decimal to binary- num % 2==0 then multiply the remainder we get with each power of 10 as 10^0, 10^1,10^2,...
using namespace std;

void decTObin(int decNum){
    int n= decNum;
    int pow= 1;         //10^0
    int binNum=0;
    while(n>0){
        int rem = n % 2;
        binNum = binNum + rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
cout<< "binary of " << decNum << " = " << binNum<<endl; 
}

int main(){
    decTObin(10);
    return 0;
}