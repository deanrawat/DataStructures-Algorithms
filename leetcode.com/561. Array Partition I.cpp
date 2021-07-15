// First go to leetcode.com -> problems -> search 561
/*
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

Example 1:

Input: nums = [1,4,3,2]
Output: 4
Explanation: All possible pairings (ignoring the ordering of elements) are:
1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4.

Constraints:

1 <= n <= 104
nums.length == 2 * n
-104 <= nums[i] <= 104

*/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // to maximize we have to sort because we have to choose min in every pair 
        int maxsum = 0;
        for(int i = 0; i < nums.size(); i+= 2){
            maxsum += min(nums[i], nums[i+1]);
        }
        return maxsum;
    }
};