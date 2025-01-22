#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        }
    return s;
    }

int bin_search(int arr[],int s,int e,int key){
    int start = 0;
    int end = e;

    int mid = start + (end-start)/2;    /*(start+end/2)  this will give error if large integer value is given so same thing differnt style is used */
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return s;
}

int findposition(int arr[],int n,int k){
    int pivot = getpivot(arr,n);
    if(k>= arr[pivot] && k<=arr[n-1]){
        return bin_search(arr,pivot,n-1,k);
    }
    else{
        return bin_search(arr,0,pivot-1,k);
    }
}

int main(){
    int arr[7]= {3,8,10,17,14,23,1};
    cout<<"Position is: "<<findposition(arr,7,23)<<endl;
}