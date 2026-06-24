//PRINT THE AREA OF SQUARE-   (QUES-1)
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square- ";
    cin>>n;
    cout<<"Area of square is- "<<(n*n)<<endl;
    return 0;
} */

//PRINT THE AVG-              (QUES-2)
/* #include<iostream>
using namespace std;
int main(){
    float pen, pencil, eraser;
    cout<<"Enter the price of pen- ";
    cin>>pen;
    cout<<"Entre the price of pencil- ";
    cin>>pencil;
    cout<<"Enter the price of eraser- ";
    cin>>eraser;
    cout<<"Price of pen apfter applying 18% GST- "<<(pen+(0.18*pen))<<endl;
    cout<<"Price of pencil after applying 18% GST- "<<(pencil+(0.18*pencil))<<endl;
    cout<<"Price of eraser after applying 18% GST- "<<(eraser+(0.18*eraser))<<endl;
    cout<<"Total cost of items- "<<(pen+pencil+eraser)<<endl;
    cout<<"Total cost of items after applying 18% GST- "<<((pen+(0.18*pen))+(pencil+(0.18*pencil))+(eraser+(0.18*eraser)))<<endl;
    return 0;
} */

//BUILD A SIMPLE INTEREST CALCULATOR-       (QUES-3)
/* #include<iostream>
using namespace std;
int main(){
    float principal, rate,time;
    cout<<"ENTRE THE PRINCIPAL AMOUNT- ";
    cin>>principal;
    cout<<"ENTRE THE RATE - ";
    cin>>rate;
    cout<<"ENTRE THE TIME- ";
    cin>>time;
    cout<<"Simple interest is- "<<(principal * rate * time)/100<<endl;
    return 0;
} */

//WRITE A PROGRAM TO CALCULATE THE AREA OF CIRCLE-          (QUES-4)
#include<iostream>
using namespace std;
int main(){
    int radius;
    float PI= 3.14;
    cout<<"ENTRE THE RADIUS OF THE CIRCLE- ";
    cin>>radius;
    cout<<"AREA OF CIRCLE IS- "<<(PI * radius * radius)<<endl;
return 0;
}