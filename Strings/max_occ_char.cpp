#include<iostream>
using namespace std;

char getMaxOccuringchar(string s){
    int arr[26]= {0};
    //create an array of count of char 
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        //lowercase
        int num=0;
        num=ch-'a';
        arr[num]++;
    }

    //find max occ char
    int maxi=-1,ans=0;
    for(int i=0;i<=26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}
int main(){

    string s;
    cout<<"Enter String: ";
    cin >> s;
    cout << getMaxOccuringchar(s) << endl;
}