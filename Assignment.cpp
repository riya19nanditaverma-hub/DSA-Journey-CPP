/* #include<iostream>                                      1 1 1 1 
using namespace std;                                       2 2 2 2 
int main(){                                                3 3 3 3 
    int n=4;                                               4 4 4 4  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }
        cout<<endl;
    }
}       */


/* #include<iostream>                                   *
using namespace std;                                    * *
int main(){                                             * * *
    int n=4;                                            * * * *
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;     
}           */

/*#include<iostream>                                   * * * *
using namespace std;                                   * * * 
int main(){                                            * * 
    int n=4;                                           * 
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;  
}   */

/* #include<iostream>                                  1 
using namespace std;                                   1 2 
int main(){                                            1 2 3 
    int n=4;                                           1 2 3 4 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;    
}           */


/* #include<iostream>
using namespace std;                                   A 
int main(){                                            B C 
    int n=4;                                           D E F
    char ch='A';                                       G H I J
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch++;
        }     cout<<endl;
    }
return 0;    
}           */

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF N- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=)
    }
}       */


/* #include<iostream>
using namespace std;                                        *
int main(){                                               * *
    int n= 4;                                           * * *
    for(int i=1; i<=n; i++){                          * * * *
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        } cout<<endl;
    }
return 0;    
}       */

/* #include<iostream>
using namespace std;            //floyd's triangle
int main(){
    int n=4;
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        } 
        cout<<endl;
    }
}           */

/*#include<iostream>
using namespace std;
int main(){                             //diamond pattern
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=2 * i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }    
    for(int i=n; i>=1; i--){
        for(int j=1; j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;    
}       */

/* #include<iostream>
using namespace std;                //butterfly pattern
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;    
}       */

/*#include<iostream>                  
using namespace std;                                1
int main(){                                         0 1
    int n=5;                                        1 0 1     
    for(int i=1; i<=n; i++){                        0 1 0 1
        for(int j=1; j<=i; j++){                    1 0 1 0 1
            cout<<(i + j + 1) % 2;
        }
            cout << "\n";
    }
return 0;
}           */

/*#include<iostream>
using namespace std;
int main(){
    int n=5;                                //rhombus
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;    
}               */

/*#include<iostream>
using namespace std;
int main(){                     //doubt
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){      
            cout<<" ";
        }
        for(int j=2; j<=)
    }
}       */