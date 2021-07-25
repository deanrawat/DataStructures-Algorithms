// First go to binarysearch.com -> problems -> Consecutive Ones.
/*
You are given a list of integers nums which contains at least one 1. Return whether all the 1s appear consecutively.

Constraints

1 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [0, 1, 1, 1, 2, 3]
Output
true
Explanation
All the 1s appear consecutively here in the middle.

Example 2
Input
nums = [1, 1, 0, 1, 1]
Output
false
Explanation
There's two groups of consecutive 1s.
*/
bool solve(vector<int>& nums) {
    int x = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (x == 0 && nums[i] == 1) {
            x = -1;
        } else if (x == -1) {
            if (nums[i - 1] == nums[i]) {
                continue;
            } else {
                x = -2;
            }
        } else if (x == -2 && nums[i] == 1) {
            return false;
        }
    }
    return true;
}