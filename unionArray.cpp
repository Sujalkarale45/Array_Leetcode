#include <vector>
#include <iostream>

std::vector<int> unionArray(std::vector<int>& arr1, std::vector<int>& arr2) {
    std::vector<int> result;
    int i = 0, j = 0;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (result.empty() || result.back() != arr2[j]) {
                result.push_back(arr2[j]);
            }
            j++;
        } else {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    
    // Add remaining elements from arr1
    while (i < arr1.size()) {
        if (result.back() != arr1[i]) {
            result.push_back(arr1[i]);
        }
        i++;
    }
    
    // Add remaining elements from arr2
    while (j < arr2.size()) {
        if (result.back() != arr2[j]) {
            result.push_back(arr2[j]);
        }
        j++;
    }
    
    return result;
}