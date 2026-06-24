/* we need to print- 
A
BC
DEF
GHIJ    */

#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"ENTER THE VALUE OF N- "<<endl;               //outer loop- 1 to n
    cin>>N;                                             //inner loop- 1 to i
    char ch='A';
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        } cout<<endl;
    }
    return 0;
}