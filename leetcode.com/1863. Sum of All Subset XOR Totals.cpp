// First go to leetcode.com -> problems -> search 1863
/*
The XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.

For example, the XOR total of the array [2,5,6] is 2 XOR 5 XOR 6 = 1.
Given an array nums, return the sum of all XOR totals for every subset of nums. 

Note: Subsets with the same elements should be counted multiple times.

An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b.

Example 1:

Input: nums = [1,3]
Output: 6
Explanation: The 4 subsets of [1,3] are:
- The empty subset has an XOR total of 0.
- [1] has an XOR total of 1.
- [3] has an XOR total of 3.
- [1,3] has an XOR total of 1 XOR 3 = 2.
0 + 1 + 3 + 2 = 6
Example 2:

Input: nums = [5,1,6]
Output: 28
Explanation: The 8 subsets of [5,1,6] are:
- The empty subset has an XOR total of 0.
- [5] has an XOR total of 5.
- [1] has an XOR total of 1.
- [6] has an XOR total of 6.
- [5,1] has an XOR total of 5 XOR 1 = 4.
- [5,6] has an XOR total of 5 XOR 6 = 3.
- [1,6] has an XOR total of 1 XOR 6 = 7.
- [5,1,6] has an XOR total of 5 XOR 1 XOR 6 = 2.
0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28
Example 3:

Input: nums = [3,4,5,6,7,8]
Output: 480
Explanation: The sum of all XOR totals for every subset is 480.
 

Constraints:

1 <= nums.length <= 12
1 <= nums[i] <= 20
*/
 // bactracking + recursion;
class Solution {
public:
    int subset(vector<int>nums, vector<int> opt){
        if(nums.size() == 0){ // if and if when our original array size is empty than we calculate xor of a subset 
            int x = 0;
            for(int i = 0; i < opt.size(); i++){ 
                x = x^opt[i]; // taking xor of subset or opt array .
            }
            return x;
        }                // there are 2 choices either we include a particular no. or not for making a subset 
                        // if we include it than we have to delete that particular no. from original vector and push that no. to output array
        vector<int> i1 = opt; // for choice 1 --- not included
        vector<int> i2 = opt; // for choice 2 --- included
        i2.push_back(nums[0]); // pushing to output array 
        nums.erase(nums.begin()+0); // deleting that no.
        return subset(nums,i1) + subset(nums,i2); // then recurisve calls for both the opts 
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> opt;
        return subset(nums, opt);
    }
};