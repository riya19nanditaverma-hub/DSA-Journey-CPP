/*#include<iostream>
using namespace std;

void binTOdec(int binNum){
int n= binNum;                                      //binary to decimal--->lastdig= n % 10; n= n/10; pow = 1; pow = pow*2; 
int pow= 1;                                         //2^0 =1
int decNum = 0;
while(n > 0){
    int lastDig = n % 10;
    decNum = lastDig * pow + decNum;
    pow= pow * 2;
    n = n / 10;
}
cout << "decimal form of "<< binNum << "is =  " << decNum << endl;
}


void decTObin(int decNum){
    int n= decNum;
    int pow = 1;                                    //decimal to binary--> remainder division method --> remainder * pow and pow = pow * 10
    int binNum = 0;
    while ( n > 0){
        int rem = n % 2;
        binNum = rem * pow + binNum;
        pow = pow * 10;
        n = n / 2;
    }
    cout << "binary form of  " << decNum << " = " << binNum << endl;
}

int main(){
    decTObin(25);
    decTObin(49);
    decTObin(31);
    decTObin(88);
    binTOdec(111111);
    binTOdec(10110);
    binTOdec(10011);
    binTOdec(110010);
    binTOdec(10);
    return 0;
}           */





/*dec to binary -----> binary addition --> binary to decimal. 

#include<iostream>
using namespace std;

int sum(int decNum1, int decNum2){          //remainder-division method
    int binNum=0;                           //dec num ---> bin num
    int pow = 1;                            //10^0=1
    int carry = 0; 
    int n= decNum1;
    int m= decNum2;  
    int answer = 0;                                        
    while((n > 0)|| carry ||(m>0)){
        int bit1 = n % 2;
        int bit2 = m % 2;
        int sum = bit1 + bit2 + carry;
        int answer = answer + (sum % 2) * pow;
        carry = sum / 2;
        pow = pow * 10;
        n = n / 2;
        m = m / 2;
    }
   cout << answer << endl; 
return answer;
}

int main(){
    sum(63,22);
    return 0;
}                           */