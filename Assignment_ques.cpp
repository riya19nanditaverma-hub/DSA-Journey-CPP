//Q1 to check if a number is palindrome or not.

#include<iostream>
using namespace std;

int reverse(int n){
    int res=0;
    while(n > 0){
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }
return res;
}          

bool isPalin(int num){
    int revNum = reverse(567);
    return num == revNum;
}

int main(){
    int n = 567;
    if(isPalin(n)){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome." << endl;
    }
    return 0;
}


/*Q2- SUM OF DIGITS OF A NUMBER-

#include<iostream>
using namespace std;

int sumDig(int n){
    int result= 0;
    while(n > 0){
        result = result + n % 10;
        n= n / 10;
    }
    cout << "the sum of digits of number is- "<<result<<endl;
    return result;
}

int main(){
    sumDig(357678);
    return 0;
}                                       */



/*Q3- function that gives output of (a^2 + b^2 + 2*ab) and accepts two parameters.

#include<iostream>
#include<cmath>
using namespace std;

int Formula(int a, int b){
    int result = 0;
    result = (pow(a,2) + pow(b,2) + 2*(a * b));
    cout << "ANSWER IS- " << result << endl;
    return result;
}

int main(){
    Formula(3,2);
    return 0;
}                   */


/*Q4- function to print the largest of three numbers.
#include<iostream>
using namespace std;

int printLargest(int a, int b, int c){
    if((a >= b) && (a >=c)){
        cout << "the largest is- " << a << endl;
    } else if((b>= a) && (b>= c)){
        cout<<"the largest is- "<< b << endl;
    } else {
        cout << "the lergest is- " << c << endl;
    }
return 0;    
}

int main(){
    printLargest(45,67,12);
    return 0;
}                   */


/*Q5- write a function that accepts a character (ch) as parameters and returns the character that occurs after ch in the english alphabet. 
#include<iostream>
using namespace std;

char alph(char ch){
    if(ch=='z'){
        return 'a';
    } else {
        return ch + 1;
    }
}    

int main(){
    cout << alph('A') <<endl;
    return 0;
}               */