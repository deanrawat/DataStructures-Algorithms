// First go to binarysearch.com -> problems -> Packing Boxes.
/*
Given a list of integers nums, pack consecutive elements of the same value into sublists.

Note: If there's only one occurrence in the list it should still be in its own sublist.

Constraints

0 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [4, 4, 1, 6, 6, 6, 1, 1, 1, 1]
Output
[
    [4, 4],
    [1],
    [6, 6, 6],
    [1, 1, 1, 1]
]
Example 2
Input
nums = [5, 5, 5, 5, 5, 5, 5, 5]
Output
[
    [5, 5, 5, 5, 5, 5, 5, 5]
]
Example 3
Input
nums = [1]
Output
[
    [1]
]

*/
vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> v;
    if(nums.size() == 0){
        return v;
    }
    int x = nums[0];
    vector<int> temp;
    temp.push_back(x);
    int i = 1;
    while( i < nums.size()){
        if(x == nums[i]){
            i++;
            temp.push_back(x);
        }
        else{
            v.push_back(temp);
            temp.clear();
            x = nums[i];
            temp.push_back(x);
            i++;
        }
    }
    v.push_back(temp);
    return v;
}