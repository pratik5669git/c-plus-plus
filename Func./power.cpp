#include<iostream>
using namespace std;

int power(int n1, int n2){
    int ans = 1;
    for(int i = 1; i <= n2; i++){
        ans = ans * n1;
        }
        return ans;
}

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin >> a;
    cout<<"Enter b: ";
    cin >> b ;

    int answer = power(a,b);
    cout<<"The result is: "<< answer<< endl;
}