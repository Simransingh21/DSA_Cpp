// Print numbers n to 1 using for loop
// 1) initialize => i = n
// 2) condition => i >= 1
// 3) update by decreasing by 1, i--

#include <iostream>
using namespace std;

int main() {
    int n = 12;
for (int i = n; i >= 1; i--)
{
    cout<< i << " ";
}
cout << endl;
return 0;
}