// Waf to print the factorial of a number

#include <iostream>
using namespace std;

int factoril (int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "factorial ("<< n <<") =" <<fact<<endl;
    return fact;  //0 -> 1, 1 -> 1, 2 -> 2
}

int main() {
    factoril(0);
    factoril(1);
    factoril(2);
    factoril(3);
    factoril(4);
    factoril(5);
    factoril(6);
    return 0;
}