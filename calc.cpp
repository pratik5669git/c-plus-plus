#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin >> a;

    cout<<"Enter b: ";
    cin >> b;

    char op;
    cout<<"Enter the Operation you want to perform: ";
    cin>>op;

    switch(op){
        case '+':cout<<"ANS:"<<(a+b)<<endl;
        break;
        case '-':cout<<"ANS:"<<(a-b)<<endl;
        break;
        case '*':cout<<"ANS:"<<(a*b)<<endl;
        break;
        case '/':if(b!=0)cout<<"ANS:"<<(a/b)<<endl;
        break;
        case '%':cout<<"ANS:"<<(a%b)<<endl;
        break;
        default:cout<<"Please enter a valid Operation"<<endl;
    }

}