#include<iostream>

using namespace std;

bool ispresent(int arr[][4],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void printsum(int arr[][4],int i,int j){ //col wise sum
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestrowsum(int arr[][4],int i,int j){
    int maxi=INT_MIN;
    int rowindex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowindex = i;
        }
    }
    cout<<"The maximum row sum = "<<maxi<<endl;
    return rowindex;
}

int main(){
    //create 2d array
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};//automatically row wise input
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};//how we want in each row and col

    //taking row wise input
    cout << "Enter the 12 numbers :";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // //taking col wise input
    // cout << "Enter the 12 numbers :";
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cin>>arr[i][j];
    //     }
    // }

    //for printing
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<"Enter elements to search: ";
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"Element found!"<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }

    cout<<"Row sum = ";
    printsum(arr,3,4);

    int ansindex=largestrowsum(arr,3,4);
    cout<<"Maximum row is at index :"<<ansindex<<endl;

    return 0;
}