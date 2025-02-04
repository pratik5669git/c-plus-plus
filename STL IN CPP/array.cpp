#include <iostream>
#include <array>    //initializing array with stl

using namespace std;
int main(){
    int basic[3] = {1,2,3};  //basic array
    array<int,4> a= {1,2,3,4};  //array with stl

    int size = a.size();
    for (int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index->"<<a.at(2)<<endl;  // element at specific position

    cout<<"Empty or not-> "<<a.empty()<<endl;

    cout<<"First Element-> "<<a.front()<<endl;
    cout<<"Last Element-> "<<a.back()<<endl;
}