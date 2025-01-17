#include <iostream>
using namespace std;

int main(){

    int a = 123;
    cout<< a << endl;

    char b = 'v';
    char c = 'a';
    cout<< b << endl << c << endl;

    bool bl = true;
    cout<< bl << endl;

    float f = 1.2;
    cout<< f << endl;

    double d = 1.23;
    cout<< d << endl;

    int size = sizeof(d);
    cout<< "size of a is :" << size << endl;

    unsigned int h = -122;     /* its 2's compliment is printed */
    cout << h << endl;

    return 0;
}