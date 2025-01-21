#include<iostream>
using namespace std;

int findduplicate(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }

    for(int i = 1;i<size;i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arru[5]={5,6,5,8,7};
    
    cout<<"unique no. : "<<findduplicate(arru,5)<<endl;
    }


//not exact ans