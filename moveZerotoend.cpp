#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int left = 0;
    
    // Find first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[left], arr[i]);
            left++;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 0, 4};
    
    moveZerosToEnd(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}