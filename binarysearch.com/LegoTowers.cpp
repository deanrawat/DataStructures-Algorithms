// First go to binarysearch.com -> problems -> Lego Towers.
/*
You are given a list of positive integers heights, representing the heights of lego towers, 
and a positive integer k. You want to pick k lego towers and make them all the same height 
by adding more bricks, but using as few bricks as possible. Return the minimum number of bricks 
needed to pick k towers and make them the same height.

Constraints

n ≤ 100,000 where n is the length of heights
0 < k
Example 1
Input
heights = [4, 7, 31, 14, 40]
k = 3
Output
17
Explanation
We can pick 4, 7, and 14 which requires 17 bricks to make the same height.

Example 2
Input
heights = [4, 4, 2, 4, 4]
k = 5

*/
int solve(vector<int>& heights, int k) {
    sort(heights.begin(), heights.end());
    int prefix = 0;
    int minsize = INT_MAX;
    int i = 0;
    int j = 0;
    while (j < heights.size()) {
        prefix += heights[j];
        if (j - i > k - 1) {
            prefix -= heights[i];
            i++;
        }
        if (j - i == k - 1) {
            minsize = min(minsize, (k * heights[j] - prefix));
        }
        j++;
    }
    return minsize;
}