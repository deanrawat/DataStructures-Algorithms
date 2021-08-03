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
    long int c = 0;
    while(n != 0){
        if(n >= 25){
            int x = n/25;
            n = n - x*25;
            c += x;
        }else if(n >= 10){
            int x = n/10;
            n = n - x*10;
            c += x;
        }else if(n >= 5){
            int x = n/5;
            n = n - x*5;
            c += x;
        }else{
            c += n;
            n = n - n;
        }
    }
    return c;
}