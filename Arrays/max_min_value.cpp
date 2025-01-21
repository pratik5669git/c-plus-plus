#include<iostream>
using namespace std;

int getmin(int num[],int n){
    int min = INT_MAX;

    for(int i = 0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[],int n){
    int max = INT_MIN;

    for(int i = 0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;

    int num[100];
    for(int i=0; i<s ; i++){
        cin>>num[i];
    }

    cout << "Maximum value is: "  <<getmax(num,s) <<endl;
    cout << "Minimum value is: "  <<getmin(num,s) <<endl;

}
