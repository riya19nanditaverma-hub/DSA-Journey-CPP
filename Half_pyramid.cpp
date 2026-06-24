/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER N- "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){                //outerloop -> (1 to n)
        for(int j=1; j<=i; j++){            //inner loop -> (1 to i)
            cout<<j;                        //we are printing the values of j and not i coz j->(1 to i) so automatically we get the value of i.
        } cout<<endl;               //if we print the values of i the we will get 1\n 22\n 333\n 4444...
    }
    return 0;
}           */



//INVERTED AND ROTATED HALF PYRAMID- 
/* we need to make-              *
                               *  *
                            *   *  *
                        *    *  *   *       
outer loop- (1 to n)
inner loop- LOOP1 ---> (spaces) ---> (1 to (n-i))
            LOOP2 ---> (stars) ---> (1 to i) */

#include<iostream>
using namespace std;           
int main(){                       
    int n;
    cout<<"ENTER THE VALUE OF N- "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){    //spaces
            cout<<" ";
            } 
        for(int j=1; j<=i; j++){    //stars
                cout<<"*";
        }
        cout<<endl; 
    } 
return 0;
} 
