#include<iostream>
using namespace std;

bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cout << "Enter a number for checking prime or not : ";
   cin >> n;
   if(isPrime(n)) {
        cout <<n<<" is a Prime number " <<endl;
   }
   else{
       cout<<n<< "Not a prime number "<<endl;

   }
}