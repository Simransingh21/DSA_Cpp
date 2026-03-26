// Print numbers n to 1 using for loop

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your n: ";
    cin>>n;

    //Using for loop
    
    for (int i=1; i<=n; i++) {
    cout << i << " ";
    }
    cout << endl;

    return 0;
}