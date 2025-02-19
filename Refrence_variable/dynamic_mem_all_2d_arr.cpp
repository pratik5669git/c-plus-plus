#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the size of row: ";
    cin>>row;
    
    int col;
    cout<<"Enter the size of col: ";
    cin>>col;

    //creating a 2d array
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //taking input
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //printing 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete[]arr;

    return 0;
}