//Euclid's Algo
// 1. gcd(a,b)=gcd(a-b,b);
// 2. lcm(a,b)*gcd(a,b)=a*b;

#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
        return a;
    }
}
int main(){
    int a,b;
    cout<<"Enter the values of a and b :";
    cin>>a>>b;

    int ans=gcd(a,b);

    cout << " The GCD/HCF of " << a << " & " << b << " is: " << ans << endl;

    return 0;
}