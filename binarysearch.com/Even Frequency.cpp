// First go to binarysearch.com -> problems -> Even Frequency
/*
Given a list of integers nums, return whether all numbers appear an even number of times.

This should be done in O(1) space.

Constraints
n ≤ 100,000 where n is the length of nums

Example 1
Input
nums = [2, 4, 4, 2, 3, 3]
Output
true

Explanation
Every number occurs twice.

*/
bool solve(vector<int>& nums) {
    int i = 0;
    for( auto x : nums){
        i = i^x; // bitwise xor property
    }
    return i == 0;
}