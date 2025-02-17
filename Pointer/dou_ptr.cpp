#include<iostream>
using namespace std;

void update(int **p2){
    //p2=p2+1; //no change

    //*p2=*p2+1; //yes p changes

    //**p2=**p2+1;//yes i changes
}
int main(){

    int i=5;
    int *p = &i;
    int **p2=&p;

    /*cout<<"All OKK"<<endl;
    //value of i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<" "<<endl;

    //add of i
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<" "<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl; */

    cout<<endl<<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;

    cout<<" "<<endl;
    update(p2);

    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    cout<<endl<<endl;

    return 0;
}