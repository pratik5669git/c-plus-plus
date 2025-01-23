#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int i;
    for(int i=0;i < n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[min_index],arr[i]);
    }  
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int sort[5] = {23,54,12,43,91};
    selection_sort(sort,5);
    printarray(sort,5);
}