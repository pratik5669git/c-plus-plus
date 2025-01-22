#include<iostream>
using namespace std;

bool is_possible(int arr[],int n, int m,int mid){
    int student = 1;
    int pagesum = 0;

    for(int i = 0; i<n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            student++;
            if(student > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
        if(student > m){
            return false;
        }
    }
    return true;
}

int allocatebooks(int arr[],int n, int m){
    int s = 0;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(is_possible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;

        }
        else{
            s = mid+1;
            }
            mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4] = {10, 20, 30, 40};
        cout<<"Min. no. of page given to two student is : "<< allocatebooks(arr,4,2)<<endl;
}
