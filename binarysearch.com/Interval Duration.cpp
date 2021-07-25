// First go to binarysearch.com -> problems -> Interval Duration.
/*
You are given a two-dimensional list of integers intervals where each list represents an inclusive [start, end] interval.

Return the total unique duration it covers.

Constraints

n ≤ 100,000 where n is length of intervals.
Example 1
Input
intervals = [
    [45, 60],
    [1, 5],
    [5, 15],
    [2, 3]
]
Output
31
Explanation
The total unique covered distance is [45, 60] (duration of 16) and [1 ,15] (duration of 15).

*/
int solve(vector<vector<int>>& interval) {
    sort(interval.begin(), interval.end());
    int res = 0;
    int maxstart = INT_MIN;
    int maxend = INT_MIN;
    int maxinterval = 0;
    for (int i = 0; i < interval.size(); i++) {
        if (interval[i][0] > maxend) {
            res += maxinterval;
            maxstart = interval[i][0];
            maxend = interval[i][1];
            maxinterval = (maxstart - maxend) + 1;
        } else if (interval[i][1] > maxend) {
            maxend = interval[i][1];
        }
        maxinterval = max(maxinterval, (maxend - maxstart) + 1);
    }
    res += maxinterval;
    return res;
}