// 0,1,1,2,3,5,8,13,21.........
#include<iostream>
using namespace std;

int main(){
    int n = 15;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i < n; i++){
        int nex_no = a+b;
        cout<<nex_no<<" ";

        a=b;
        b=nex_no;
    }
    cout<<"\n";
}
