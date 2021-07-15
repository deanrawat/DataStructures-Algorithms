// First go to binarysearch.com -> problems -> Number of K-Length Sublists with Average at Least Target.
/*
Given a list of integers nums, and integers k and target, return the number of sublists whose length is k and its average value ≥ target.

Constraints

n ≤ 100,000 where n is the length of nums

Example 1
Input
nums = [0, 9, 4, 5, 6]
k = 3
target = 5

Output
2

Explanation
Sublist [9, 4, 5] has average value of 6 and [4, 5, 6] has average of 5

*/
int solve(vector<int>& nums, int k, int target) {
    int i = 0;
    int j = 0;
    int count = 0;
    int prefix = 0;
    while(j < nums.size()){
        prefix += nums[j]; 
        while(j-i+1 > k){ // when window exceeded the k size removing element from left of window.
            prefix -= nums[i];
            i++;
        }
        if(j-i+1 == k){
            if(prefix / k >= target){
                count++;
            }
        }
        j++;
    }
    return count;
}