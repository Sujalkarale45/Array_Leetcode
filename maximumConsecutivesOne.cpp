#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, maxi = 0;

    for(int num : nums) {
        if(num == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }
    return maxi;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
}