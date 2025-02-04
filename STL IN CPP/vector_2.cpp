#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> a(5,1); //a(5,1)  5 is size of the vector & 1 means intializing all the 5 elements by 1.

    cout<<"printing a's elements: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);  // copy all the elements of a
    
    cout<<"printing last elements: "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

}