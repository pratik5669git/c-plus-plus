#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 7;

    bool first = (a==b);
    cout << first << endl;

    bool sec = (a>b);
    cout << sec << endl;

    bool third = (a<b);
    cout << third << endl;

    bool fourth = (a<=b);
    cout << fourth << endl;

    bool fifth = (a>=b);
    cout << fifth << endl;

    bool six = (a!=b);
    cout << six << endl;
    
    cout << "_____________" << endl;

    int h = 22;
    cout << !h << endl;
}