#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int s){
    for(int i=0;i<s;i+=2){
        if(i+1 < s){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {2,4,5,3,8,9,6,0};
    int odd[6] = {1,5,3,7,9,4};

    swapalternate(even,8);
    printarray(even,8);

    cout<<endl;

    swapalternate(odd,6);
    printarray(odd,6);
}