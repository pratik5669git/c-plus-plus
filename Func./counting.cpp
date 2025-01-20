#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout<<endl;
}
int main(){
    int n;  
    cout << "Enter a number whose counting need to be printed : ";
    cin >> n;

    printCounting(n);
    return 0;
}