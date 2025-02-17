#include<iostream>
using namespace std;

int main(){
    //pointer to int is created and pointing to some garbage address
    // int *p=0;
    // cout<<*p<<endl; //segmented fault

    // int i=5;
    // int *q= &i;    //one way
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p=0;    //2nd way
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    cout<<"  "<<endl;

    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;

    cout<<"  "<<endl;

    int *p=&num;
    cout<<"before:"<<num<<endl;
    (*p)++;
    cout<<"after:"<<num<<endl;

    cout<<"  "<<endl;

    //copying a pointer
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    cout<<"  "<<endl;

    //important concept
    int i=3;
    int *t=&i;
    *t=*t + 1;
    cout<<*t<<endl;
    cout<<"before t"<< t <<endl;
    t=t+1;
    cout<<"after t"<< t <<endl;

    
    return 0;
}
