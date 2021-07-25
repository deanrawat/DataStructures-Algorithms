// First go to binarysearch.com -> problems -> Buying Cars.
/*
Given a list of integers prices representing prices of cars for sale, and a budget k, return the maximum number of cars you can buy.

Constraints

n ≤ 200,000 where n is the length of prices
Example 1
Input
prices = [90, 30, 20, 40, 90]
k = 95
Output
3
Explanation
We can buy the cars with prices 30, 20, and 40.

Example 2
Input
prices = [60, 90, 55, 75]
k = 50
Output
0
Explanation
We cannot afford any of these cars.
*/
int solve(vector<int>& prices, int k) {
    sort(prices.begin(),prices.end());
    int count = 0;
    for(int i = 0 ; i < prices.size(); i++){
        if(k >= prices[i]){
            k = k - prices[i];
            count++;
        }else{
            break;
        }
    }
    return count;
}