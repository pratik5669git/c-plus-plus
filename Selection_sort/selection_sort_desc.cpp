#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int i;
    for(int i=0;i < n-1;i++){
        int max_index = n-1;
        for(int j=i;j<n;j++){
            if(arr[j] > arr[max_index])
                max_index = j;
        }
        swap(arr[max_index],arr[i]);
    }  
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int sort[5] = {23,56,34,24,109};
    selection_sort(sort,5);
    printarray(sort,5);
}