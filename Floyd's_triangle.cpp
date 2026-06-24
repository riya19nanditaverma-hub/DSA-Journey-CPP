/* we need to make- 
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15

(n=5)
outer loop- (1 to n)
inner loop- (1 to i) because r1-1, r2-2, r3-3,...
            num=1;
            cout<< num;
            num = num+1;*/









#include<iostream>
using namespace std;
int main(){
    int n=9;
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
return 0;
}