// Sum of n natural number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your n: ";
    cin>>n;

    //Using for loop
    
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;     // sum += i;    
    }
    cout << "sum = " << sum << endl;
    return 0;
}

// Sum of n natural number formula = n(n+1)/2