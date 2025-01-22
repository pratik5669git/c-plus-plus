#include<iostream>
using namespace std;

int peak_index(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        }
    return s;
    }

int main(){
    int arr[6]= {3 , 40 , 95, 10,45,90 };
    cout<<"Peak is: "<<peak_index(arr,6)<<endl;
}