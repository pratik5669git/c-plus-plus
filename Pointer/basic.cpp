#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;
    //address of Operator-&
    cout<<"address of num is: "<< &num <<endl;

    cout<<"  "<<endl;

    int *ptr=&num;
    cout<<"Address is :"<<ptr<<endl;
    cout<<"Value is :"<<*ptr<<endl;

    cout<<"  "<<endl;


    double d=4.2;
    double *ptr1 =&d;
    cout<<"Address is :"<<ptr1<<endl;
    cout<<"Value is :"<<*ptr1<<endl;

    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
    cout<<"size of double is:"<<sizeof(d)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr1)<<endl;

    return 0;
}
