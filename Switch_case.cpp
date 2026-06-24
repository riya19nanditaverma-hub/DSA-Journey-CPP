/* switch(day) {
case 1 : cout<<"MONDDAY";
            break;
case 2 : cout << "TUESDAY";
            break;
//more cases for 3-7
default: cout<<"INVALID";    */

#include<iostream>
using namespace std;
int main(){
    /*int day=1;

    switch(day){
        case 1: cout<<"MONDAY"<<endl;
                break;
        case 2: cout<<"TUESDAY"<<endl;
                break;
        case 3: cout<<"WEDNESDAY"<<endl;
                break;
        case 4: cout<<"THURSDAY"<<endl;
                break;
        case 5: cout<<"FRIDAY"<<endl;
                break;
        case 6: cout<<"SATURDAY"<<endl;
                break;
        case 7: cout<<"SUNDAY"<<endl;
                break;
        default: cout<<"INVALID"<<endl;
    } */


    //build calculator for 4 cases of arithematic operations-
    int a,b;
    char op;
    cout<<"ENTER THE VALUES- "<<endl;
    cin>>a;
    cin>>b;
    cout<<"ENTER OPERATOR- "<<endl;
    cin>>op;
    switch(op) {
        case '+' : cout<<(a+b)<<endl;
            break;
        case '-' : cout<<(a-b)<<endl;
            break;
        case '*' : cout<<(a*b)<<endl;
            break;
        case '/' : cout<<(a/b)<<endl;
            break;
        default: cout<<"invalid"<<endl; 
    }
    return 0;
}

