#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;


    cout<<"Print First Index Element-> "<<d.at(1)<<endl; //d.at(1)  1 here shows index pos.

    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<"Empty -> "<< d.empty()<<endl;

    cout<<"before erase size: "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1); // give the position from where to where delete

    cout<<"after erase size: "<<d.size()<<endl;

    for(int i:d){
        cout<<"elements: "<<i<<" ";
     }cout<<endl;
}