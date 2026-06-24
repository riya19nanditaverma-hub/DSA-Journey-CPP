#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF N- "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){            //1st pyramid
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
    for(int j=1; j<=(2*i-1); j++){
        cout<<"*";
    }
    cout<<endl;
    } 
    for(int i=1; i<=n; i++){           //2nd pyramid
        for(int j=1; j<=(i-1); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*(n-i) + 1); j++){            //here, 7 -> 5 -> 3 -> 1 (stars)
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}
