#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin >> n;

    int ans = 0;

    while( n != 0){
        int digit = n % 10;
        if((ans > INT_MAX/10 ) | (ans< INT_MIN/10)){
            cout<<0;
        }
        else{
            ans = (ans*10) + digit;
            n = n / 10;
            }
        }
    cout<< ans << endl;
}