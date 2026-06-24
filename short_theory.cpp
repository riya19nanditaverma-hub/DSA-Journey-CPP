/* CONDITIONAL OPERATORS-they are of four types :
1. if,else
2. else if
3. ternary operator
4. switch. */

/* #include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age"<<endl;
    cin >> age;
    if(age >= 18){
        cout << "CAN VOTE" << endl;
    } else{
        cout << "CANNOT VOTE" << endl;
    }
    return 0;
} */

#include<iostream>
using namespace std;
int main(){
    /* float marks;
    cout << "ENTER YOUR MARKS- "<<endl;
    cin >> marks;
    if(marks >= 33){
        cout << "YOU'RE PASS" <<endl;
    } else {
        cout << "YOU'RE FAIL" << endl;
    } */


    /*PRINT LARGEST OF TWO NUMBERS-
    int a;
    int b;
    cout << "Enter two numbers- " <<endl;
    cin >> a;
    cin >> b; 
    if(a > b){
        cout << "A IS GREATER THAN B." << endl;
    } else {
        cout << "B IS GREATER THAN A." << endl;
    } */ 



    /*PRINT IF A NUMBER IS ODD OR EVEN.
    int num;
    cout << "ENTER A NUMBER- "<<endl;
    cin>>num;
    if(num==0 || num==1){
        cout << "NUMBER IS NEITHER ODD NOR EVEN."<<endl;
    } else if(num%2==0){
        cout<<"NUMBER IS NOT ODD."<<endl;
    } else {
        cout<<"NUMBER IS ODD."<<endl;
    } */



    /*PRINT THE GRADES-
    int marks;
    cout<<"ENTER THE MARKS- "<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"GRADE = A."<<endl;
    } else if (marks >= 80){
        cout << "GRADE = B."<<endl;
    } else {
        cout<<"GRADE = C."<<endl;
    } */


    
    
    /*CREATE AN INCOME TAX CALCULATOR-
    int income;
    cout<<"PLEASE ENTER YOUR INCOME (in lakhs)- "<<endl;
    cin>>income;
    if(income < 5){
        cout<< "YOUR AMOUNT AFTER TAX IS- "<<income<<endl;
    } else if (income < 10){
        cout<<"YOUR TAX IS- "<< (0.20*income)<<endl;
    } else {
        cout << "YOUR TAX IS- "<< (0.3*income)<<endl;
    } */



    
    //PRINT THE LARGEST OF THREE NUMBERS-
    int num1, num2, num3;
    cout<<"ENTER THREE NUMBERS- "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if((num1 >= num2) && (num1 >= num3)){
        cout <<"the largest number is: "<<num1<<endl;
    } else if ((num2 >= num1) && (num2 >= num3)) {
        cout<<"the largest number is- "<<num2<<endl;
    } else {
        cout<<"the largest number is- "<<num3<<endl;
    }
    return 0;
}

