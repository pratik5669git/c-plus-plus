#include <iostream>
using namespace std;

int main()
{
    
    char ch;
    cout<<"Enter values (A-Z || a-z || o-9): ";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"Numeric"<<endl;
    }

    
}