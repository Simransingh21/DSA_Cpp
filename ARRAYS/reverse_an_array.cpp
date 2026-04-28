/*
Reverse an array : Without extra space (2 pointer approach)
TC : O (n)
SC : O (1)
*/

#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " , ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end --;
    }
    
    printArr(arr, n);

    cout << endl;
    return 0;
}