#include<iostream>
using namespace std;

int main(){
    int a = 3; //global variable
    cout << a << endl;

    if(true){
        int a = 5; //local variable
        cout << a << endl;
    }
    cout<< a << endl;

    int i = 5;
    // if i is given inside for loop then it will use that only if not then it will use outer one
    for(; i<8;i++){       
        cout << "Hi" << endl;
    }
}