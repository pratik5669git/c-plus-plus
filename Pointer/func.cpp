#include<iostream>
using namespace std;

void update(int *p){
    // p=p+1;//add update
    // cout<<"inside: "<<p<<endl;
    *p=*p+1; //value update
}
void print(int *p){
    cout<< *p << endl;
}

int getSum(int arr[],int n){
    //cout << endl <<"Size :"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}


int main(){
   /*int value=5;
   int *p = &value;

   //print(p);
   cout<<"P: "<<p<<endl;

    cout<<"before: "<<*p<<endl;
   update(p);
    cout<<"after: "<<*p<<endl;*/

    int arr[8]={1,2,3,4,5,6,7,8};

    cout<<"Sum is: "<<getSum(arr+2,6)<<endl;//{3,4,5,6,7,8} will go in this

   return 0;

}