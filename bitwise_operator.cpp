#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<"a&b :"<< (a&b)  << endl;
    cout<<"a|b :"<< (a|b)  << endl;
    cout<<"~a  :"<< (~a)  << endl;
    cout<<"a^b :"<< (a^b)  << endl;


    cout<<"               "<< endl;


    cout<<(17>>1) << endl;
    cout<<(17<<1) << endl;
    cout<<(17>>2)<< endl;
    cout<<(19<<1)<< endl;
    cout<<(21<<2)<< endl;

    cout<<"               "<< endl;

    int i = 7;

    cout<<(++i)<< endl;
    cout<<(i++)<< endl;
    cout<<(i--)<< endl;
    cout<<(--i)<< endl;


    cout<<"               "<< endl;


    int f,g=1;
    f=10;
    if(++f)
        cout << g;
    else
        cout << ++g;
    cout << endl;

}