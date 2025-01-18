#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin>>a;

    // if(a>0){
    //     cout<<"Positive"<<endl;
    // }
    // else if(a<0){
    //     cout<<"Negative"<<endl;
    // }


    // a = cin.get();
    //  //returns the ascii value of first element even of space and enter
    // cout<<"value of a is : "<< a << endl;


    // int a,b;
    // cin>>a>>b; 
    // // first entered first value then space or second value is entered
    // cout<<"Value of a is: " <<a<<"  "<<b<<endl;
    

    int a,b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;

    if(a>b){
        cout<<"A is greater than B"<<endl;
    }
    if(b>a){
        cout<<"B is greater than A"<<endl;
    }

}