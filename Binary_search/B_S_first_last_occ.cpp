#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[7] = {3,2,3,3,5,3,3};
    cout<<"First occurence of 3 is at index: "<<firstocc(even,7,3)<<endl;
    cout<<"Last occurence of 3 is at index: "<<lastocc(even,7,3)<<endl;

    int Totalocc = (lastocc(even,7,3)-firstocc(even,7,3)+1);
    cout<<"Total occurence of 3 is: "<<Totalocc<<endl;

    return 0;
}

