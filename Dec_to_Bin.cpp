#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n!= 0){
        int bit = n&1;
        ans = (bit * pow(10,i))+ ans;

        n = n >> 1;
        i++;

    }
    cout<<"Decimal to Binary : "<< ans << endl;
}