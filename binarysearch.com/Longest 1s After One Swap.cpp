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
    while (j < s.length()) { // traversing over vector
        if (s[j] == '0') {
            count++;
        } else {
            maxone++;
        }
        while (count > 1) { // this check is happening because we need at most one 0 in our window . So, as we get another 0 in our current window we starting deleting 0 values from i pointer and increasing it 
            if (s[i] == '0') {
                count--; // as we found 0 from left side we decrease our count.
            }
            i++;
        }
        maxlen = max(maxlen, j - i + 1); // check maxlen
        j++;
    }
    if (maxone < maxlen) { // this check is because we can only swap values if there is enough 1's to swap with one 0 . if there is only one 1 in input how you're going to swap values thats's why
        return maxlen - 1;
    }
    return maxlen;
}