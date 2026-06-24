/* we need to print-
* * * * * * * *     //R1->stars
*             *     //R2-star+space+star
* * * * * * * *         


ex- n=4: 
* * * * *       1st + 3st + 1st                        outer loop= (1 to n).
*       *       1st + 3sp + 1st                        inner loop= cout<< "*"    //first 
*       *       1st + 3sp + 1st                                    cout<<" "     //space (1 to n-1)
* * * * *       1st + 3st + 1st                                    cout<<"*"     //last */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"*";          //first star
        for(int j=1; j<=(n-1); j++){
            if((i==1) || (i==n)){
                cout<<"*";
            } else {
                cout<<" ";
            }
        } cout<<"*"<<endl;      //last star
    }
    return 0;
}
