#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin >> n;

    int i = 1;
    for(; ; ){
        if(i<=n){
            cout<<i<<" ";
        }
        else{
            break;
        }
        i++;
    }
    cout<<("\n");

    cout<<" "<<endl;
    

    for(int a=0,b=1,c=2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}


