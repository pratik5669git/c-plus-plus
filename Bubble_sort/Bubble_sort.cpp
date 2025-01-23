#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){    //for optimized time complexity
            break;
        }
    }

}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int sort[5] = {23,91,34,54,4};
    bubble_sort(sort,5);
    printarray(sort,5);
}