#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("Pratik");
    s.push("kumar");
    s.push("hero");

cout<<"Top element: "<<s.top()<<endl;

s.pop();

cout<<"Top element after pop: "<<s.top()<<endl;

cout<<"size of stack :"<<s.size()<<endl;

cout<<"Empty :"<<s.empty()<<endl;
}