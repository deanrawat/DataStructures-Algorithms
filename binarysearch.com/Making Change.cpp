// First go to binarysearch.com -> problems -> Making Change.
/*
Find the minimum number of coins required to make n cents.

You can use standard American denominations, that is, 1¢, 5¢, 10¢, and 25¢.

Constraints

0 ≤ n < 2 ** 31
Example 1
Input
n = 3
Output
3
Explanation
You can make this with 3 pennies.

Example 2
Input
n = 5
Output
1
Explanation
You can make this with a 5 cent coin.

Example 3
Input
n = 6
Output
2
Explanation
You can make this with a 5 cent coin and a 1 cent coin.
*/
int solve(int n) {
    int count = 0;
    count += (n / 25);
    n %= 25;
    count += (n / 10);
    n %= 10;
    count += (n / 5);
    n %= 5;
    count += n;
    return count;
}