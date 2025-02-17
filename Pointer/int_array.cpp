#include<iostream>
using namespace std;

int main(){
     //int arr[20]={23,144,253,67};

    /* cout<<"Address of 1st memeory block: "<<arr<<endl;
     cout<<arr[0]<<endl;
     cout<<"Address of 1st memeory block: "<<&arr[0]<<endl;

    cout<<"1: "<<*arr<<endl;
    cout<<"2: "<<*arr+1<<endl;
    cout<<"3: "<<*(arr+1)<<endl;
    cout<<"4: "<<*(arr)+1<<endl;
    cout<<"5: "<<arr[2]<<endl;
    cout<<"6: "<<*(arr+2)<<endl;

    int i=3;
    cout<< i[arr] <<endl;

    int temp[10]={1,2};
    cout<<"Size of temp : "<<sizeof(temp)<<endl;
    cout<<"Size of *temp : "<<sizeof(*temp)<<endl;
    cout<<"Size of address temp : "<<sizeof(&temp)<<endl;

    cout<<" "<<endl;

    int *ptr=&temp[0];
        cout<<"size of ptr: "<<sizeof(ptr)<<endl;//returns the size of the pointer itself, not the object it points to
        cout<<"size of *ptr: "<<sizeof(*ptr)<<endl;//returns the size of the object that ptr points to
        cout<<sizeof(&ptr)<<endl;
    
   int a[20]={1,2,3,4,5,6};
   cout<<&a[0]<<endl;
   cout<<&a<<endl;//in this all 3 will be same
   cout<<a<<endl;

    cout<<" "<<endl;

   int *p = &a[0];
   cout<<p<<endl;
   cout<<&p<<endl;
   cout<<*p<<endl;
*/

    int arr[10];
    //arr=arr+1;//error cant do this in array

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr<<endl;
    return 0;
}
