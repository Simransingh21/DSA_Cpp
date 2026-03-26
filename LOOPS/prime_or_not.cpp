//check if a number is prime or not

#include <iostream>
using namespace std;

int main() {
    int n = 15;
    bool isPrime = true;
    
    for (int i=2; i<=n-1; i++) {
        if (n % i == 0){      //i is a factor of n; i completely divide n; n is non-prime
             isPrime = false;
             break;
        }
    }
    if (isPrime){
        cout<< "number is prime" << endl;
    }
    else {
        cout<< "number is NOT prime" << endl;
    }
    return 0;
}