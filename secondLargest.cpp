#include <iostream>
#include <algorithm>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1; // Not enough elements
    
    sort(arr, arr + n, greater<int>());
    
    // Skip duplicates of the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[0]) {
            return arr[i];
        }
    }
    return -1; // No second largest found
}

int main() {
    int arr[] = {10, 5, 8, 12, 3, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = findSecondLargest(arr, n);
    
    if (result != -1) {
        cout << "Second Largest: " << result << endl;
    } else {
        cout << "No second largest element" << endl;
    }
    
    return 0;
}