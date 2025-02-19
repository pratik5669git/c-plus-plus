#include<iostream>
using namespace std;

void update1(int n){
    n++;
}

void* update2(int &n){//void ptr points to any data type
    n++;
}

// int& update2(int n){//bad practice should not be used
//     n++;
//     return n;
// }

int main(){
/*  int i=4;
    int &j=i;//refrence variable created

    cout<<"i="<<i<<endl;
    j++;   
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
*/

    int n=5;

    //pass by value
    cout<<"Before:"<<n<<endl;
    update1(n);
    cout<<"After:"<<n<<endl;

    cout<<" "<<endl;

    //pass by refrence
    cout<<"Before:"<<n<<endl;
    update2(n);
    cout<<"After:"<<n<<endl;

    return 0;
}