#include <iostream>
#include <map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="Pratik";
    m[13]="kmar"; 
    m[2]="hello";
    m[12]="ello";

    // m.insert((5,"bheem"));  //not working
    cout<<"before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<"  "<<i.second<<endl;
    }
    cout<<"finding 13 ->" <<m.count(13)<<endl;
    m.erase(13); //complexity:O(log n)
    cout<<"after erase"<<endl;

    for(auto i:m){
        cout<<i.first<<"  "<<i.second<<endl;
    }
    cout<<endl<<endl;

    auto it = m.find(2);

    for (auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}