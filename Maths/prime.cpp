#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for (int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
    }

int main(){
    cout<<"Enter the no. to check: ";
    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"Prime No."<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }

}