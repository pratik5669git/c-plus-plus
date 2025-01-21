#include<iostream>
using namespace std;

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

int findintersection(int arr1[],int n,int arr2[],int m){
    int i=0,j=0,ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
          ans=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    int arr1[7] = {1,2,2,2,3,4};
    int arr2[5] = {5,9};

    cout<<findintersection(arr1,7,arr2,5)<<endl;

}


//not as expeted ans