#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n){
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Value of Sum is: "<<sum<<endl;
    
}