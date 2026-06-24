//ERECT STAR PATTERN-
/* #include<iostream>
using namespace std;
int main(){
    int n;                                                  //outer loop- rows(i)-> n times (1 to n).
    cout<<"ENTRE THE VALUE OF N- "<<endl;                   //inner loop- column(j)->i times (1 to i). because: R1->*, R2->**,..
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        } cout<<endl;
    }  
return 0;     
}  */

//INVERTED STAR PATTERN-
#include<iostream>
using namespace std;                           
int main(){
    int n;
    cout<<"ENTER N- "<<endl;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=n; j>i; j--){
            cout<<" * ";
        } cout<<endl;
    } 
}

/*generally the pattern problems are solved as- 
i
n-i
n-i+1
n-i-1
ODD NUMBER COMBINATION- (2 * i-1) or (2 * i + 1)
*/