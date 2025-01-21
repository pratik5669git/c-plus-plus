#include<iostream>
using namespace std;

int findunique(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arru[7]={2,3,4,5,2,3,4};
    
    cout<<"unique no. : "<<findunique(arru,7)<<endl;
    }