#include<iostream>
using namespace std;

int largestElement(int arr[], int size) {
    if (size <= 0) return -1; // Handle empty array case
    
    int largest = arr[0]; // Initialize largest to first element
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is greater
        }
    }
    return largest;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int largest = largestElement(arr, size);
    if (largest != -1) {
        cout << "Largest element: " << largest << endl;
    } else {
        cout << "Array is empty." << endl;
    }
    
    return 0;
}