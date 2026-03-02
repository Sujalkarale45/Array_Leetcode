#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarray(int arr[], int n, int k) {
    unordered_map<int, int> mp;  // prefixSum -> index
    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        // Case 1: If sum itself equals k
        if(sum == k) {
            maxLen = i + 1;
        }

        // Case 2: If (sum - k) seen before
        if(mp.find(sum - k) != mp.end()) {
            int len = i - mp[sum - k];
            maxLen = max(maxLen, len);
        }

        // Store prefix sum if not already present
        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    int arr[] = {1, 2, 3, -2, 5};
    int n = 5;
    int k = 6;

    cout << longestSubarray(arr, n, k);
}