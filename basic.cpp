#include <iostream>
#include <array>
using namespace std;

int main() {
    
    // 1. BASIC ARRAY DECLARATION AND INITIALIZATION
    cout << "=== 1. Array Basics ===" << endl;
    
    // Declare and initialize array of integers
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Access elements by index (0-based)
    cout << "First element: " << arr[0] << endl;
    cout << "Third element: " << arr[2] << endl;
    
    
    // 2. ARRAY WITHOUT EXPLICIT SIZE (compiler counts elements)
    cout << "\n=== 2. Implicit Size ===" << endl;
    
    int arr2[] = {100, 200, 300, 400};
    cout << "Elements: ";
    for (int i = 0; i < 4; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    
    // 3. ARRAY INITIALIZATION (partial initialization fills rest with 0)
    cout << "\n=== 3. Partial Initialization ===" << endl;
    
    int arr3[5] = {1, 2, 3};  // Last 2 elements are 0
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    
    
    // 4. ARRAY OF CHARACTERS (STRING)
    cout << "\n=== 4. Character Arrays ===" << endl;
    
    char str[] = "Hello";  // Includes null terminator '\0'
    cout << "String: " << str << endl;
    cout << "First char: " << str[0] << endl;
    
    
    // 5. ITERATE THROUGH ARRAY
    cout << "\n=== 5. Loop Through Array ===" << endl;
    
    int nums[] = {5, 10, 15, 20, 25};
    cout << "Using for loop: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    // Range-based for loop (C++11)
    cout << "Using range-based for: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    
    // 6. MODIFY ARRAY ELEMENTS
    cout << "\n=== 6. Modify Elements ===" << endl;
    
    int values[3] = {1, 2, 3};
    cout << "Before: ";
    for (int v : values) cout << v << " ";
    cout << endl;
    
    values[1] = 99;  // Change second element
    cout << "After: ";
    for (int v : values) cout << v << " ";
    cout << endl;
    
    
    // 7. 2D ARRAYS (MATRIX)
    cout << "\n=== 7. 2D Arrays ===" << endl;
    
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "2D Array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    // 8. STL ARRAY (modern C++, safer than C-style arrays)
    cout << "\n=== 8. STL Array ===" << endl;
    
    array<int, 4> stl_arr = {10, 20, 30, 40};
    cout << "STL Array size: " << stl_arr.size() << endl;
    cout << "Elements: ";
    for (int elem : stl_arr) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "First element: " << stl_arr.at(0) << endl;
    cout << "Last element: " << stl_arr.back() << endl;
    
    
    // 9. ARRAY SIZE CALCULATION
    cout << "\n=== 9. Array Size ===" << endl;
    
    int data[] = {7, 8, 9, 10, 11};
    int size = sizeof(data) / sizeof(data[0]);
    cout << "Array size: " << size << endl;
    cout << "Sum of elements: ";
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    cout << sum << endl;
    
    
    // 10. POINTER AND ARRAY RELATIONSHIP
    cout << "\n=== 10. Arrays and Pointers ===" << endl;
    
    int arr_ptr[] = {5, 10, 15};
    int* ptr = arr_ptr;  // Array decays to pointer
    
    cout << "Using pointer:\n";
    cout << "First element via pointer: " << *ptr << endl;
    cout << "Second element via pointer: " << *(ptr + 1) << endl;
    cout << "Third element via pointer: " << *(ptr + 2) << endl;
    
    return 0;
}
