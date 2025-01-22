#include<iostream>
using namespace std;

int bin_search(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;    /*(start+end/2)  this will give error if large integer value is given so same thing differnt style is used */
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = bin_search(even,6,6);
    cout<< "Index of 6 is " << evenIndex << endl;

    int oddIndex = bin_search(odd,5,8);
    cout<< "Index of 8 is " << oddIndex << endl;

    return 0;

}