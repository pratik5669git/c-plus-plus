#include<iostream>
using namespace std;

bool search(int arr[],int s,int k){
    for(int i = 0;i<s ; i++){
        if(arr[i]==k){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1,43,52,42,12,53,75,74,43,34};
    cout<<"Enter the element to search for: ";
    int k;
    cin>>k;

    bool found = search(arr,10,k);
    if(found){
        cout<<k <<" Present"<<endl;
    }
    else{
        cout<<k <<" Not Present"<<endl;
    }
}