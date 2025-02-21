#include<iostream>
using namespace std;
#define pi 3.14
#define area(r) (pi*(r)*(r)) //defining function in macro 

int main(){
    float r=66;
    cout<<"The area is= "<<area(r)<<endl;

    return 0;

}