// First go to binarysearch.com -> problems -> Longest Consecutive Duplicate String.
/*
Given a lowercase alphabet string s, return the length of the longest substring with same characters.

Constraints

0 ≤ n ≤ 100,000 where n is the length of s
Example 1
Input
s = "abbbba"
Output
4
Explanation
The longest substring is "bbbb".

Example 2
Input
s = "aaabbb"
Output
3

*/
int solve(string s) {
    if(s.size() == 0){
        return 0;
    }
    int maxlen = 0;
    int x = s[0];
    int i = 0, j = 1;
    while( j < s.size()){
        if(x != s[j]){
            maxlen = max(maxlen, j-i);
            i = j;
            x = s[j];
        }
        j++;
    }
    maxlen = max(maxlen, j-i);
    return maxlen;
}