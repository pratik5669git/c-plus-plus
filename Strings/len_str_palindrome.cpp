#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

char tolowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=(ch-'A'+'a');
        return temp;
    }
}
bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(tolowercase(a[s])!= tolowercase(a[e]))
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int length(char name[]){
    int count = 0;
    for(int i=0;name[i]!=0;i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>> name;

    cout << "Your name is ";
    cout<< name <<endl;

    int len=length(name);
    cout<<"length: " <<len << endl;

    reverse(name,len);
    cout<<"Your name is ";
    cout<< name <<endl;

    cout <<"Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout<<"Character is: "<<tolowercase('b')<<endl;
    cout<<"Character is: "<<tolowercase('B')<<endl;

    return 0;
}