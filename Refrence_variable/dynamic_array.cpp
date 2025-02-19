#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int *arr = new int[n];    //variable size array declaration with keyword new
    //dynamic memory stores in heap
    //static in permanent memory/stack


    //taking input in array
    cout<<"Enter the numbers:"; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getsum(arr,n);
    cout<<"Sum="<<ans<<endl;

    return 0;
}