#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max_heap
    priority_queue<int> maxi;

    //min_heap
    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(8); //complexity: O(1)
    maxi.push(3);
    maxi.push(1);
    maxi.push(12);

    cout<<"Size: "<<maxi.size()<<endl;
    int n= maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(6);
    mini.push(3);
    mini.push(1);
    mini.push(12);

    int m= mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

cout<<"khali h ky bhai -> "<<mini.empty()<<endl;

}