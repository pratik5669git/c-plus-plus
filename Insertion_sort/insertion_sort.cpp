#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1; // we have used there as j is not defined at outer of the for loop
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else { 
                break;
            }
            
        }
        arr[j+1] = temp;  
    } 
}
void printarray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int main(){
    int sort[5] = {23,91,34,54,4};
    insertion_sort(sort,5);
    printarray(sort,5);
}