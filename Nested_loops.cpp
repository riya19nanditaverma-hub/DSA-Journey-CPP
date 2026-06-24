/*NESTED LOOPS- loop inside loop.
1  1  1  1                     row1                 1 is printed 4 times 
2  2  2  2                     row2                 2 is printed 4 times  
3  3  3  3                     row3                 3 is printed 4 times 
4  4  4  4                     row4                 4 is printed 4 times 
c1 c2 c3 c4 

outer loop(no. of rows): for(int i=1; i<=4; i++){                     //if 4 lines are made then outer loop is used/run 4 times.
                        }

inner loop: (no. of columns or what is printed in each row and how many times): for(int j=1; j<=4; j++){
      //do something(inner loop ke andr wo kaam hoga jo har row mei hoga)                            } */


/* for(int i=1; i<= 4; i++){
    //outerloop-rows
    for(int j=1; j<=4; j++){
    //innerloop-columns
    cout<<i<<" ";
    }
}   */   

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER N- "<<endl;
    cin>>n;
    //outerloop
    for(int i=1; i<=n; i++){
        //innerloop
        for(int j=1; j<=n; j++){
            //work
            cout<<i<<" ";
        } cout<<endl;
    } 
return 0;
}

