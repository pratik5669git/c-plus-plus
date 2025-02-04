#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Pratik");
    q.push("kumar");
    q.push("hero");

    cout<< "size before pop: "<<q.size()<<endl;

    cout<<"First element:"<<q.front()<<endl;

    q.pop();
    
    cout<<"First element:"<<q.front()<<endl;

    cout<<"size after pop:"<<q.size()<<endl;

}
