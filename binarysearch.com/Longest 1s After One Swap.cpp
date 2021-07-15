// First go to binarysearch.com -> problems -> Longest 1s After One Swap.
/*
You are given a string s containing 1s and 0s. Given that you can swap at most one pair of characters in the string, return the resulting length of the longest contiguous substring of 1s.

Constraints
n ≤ 100,000 where n is the length of s.

Example 1
Input
s = "0111011101"

Output
7

Explanation
You can swap s[4] and s[9].

*/
int solve(string s) {
    int i = 0;
    int j = 0;
    int count = 0;
    int maxone = 0;
    int maxlen = 0;
    while (j < s.length()) {
        if (s[j] == '0') {
            count++;
        } else {
            maxone++;
        }
        while (count > 1) {
            if (s[i] == '0') {
                count--;
            }
            i++;
        }
        maxlen = max(maxlen, j - i + 1);
        j++;
    }
    if (maxone < maxlen) {
        return maxlen - 1;
    }
    return maxlen;
}