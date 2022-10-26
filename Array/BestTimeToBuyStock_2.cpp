// Type II: Infinite transactions are allowed

 /* Given an array price[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible for buying and selling the stocks on different days using transactions where any number of transactions are allowed. 

Examples: 

Input: prices[] = {7, 1, 5, 3, 6, 4} 
Output: 7
Explanation:
Purchase on 2nd day. Price = 1.
Sell on 3rd day. Price = 5.
Therefore, profit = 5 – 1 = 4.
Purchase on 4th day. Price = 3.
Sell on 5th day. Price = 6.
Therefore, profit = 4 + (6 – 3) = 7.

Input: prices = {1, 2, 3, 4, 5} 
Output: 4
Explanation: 
Purchase on 1st day. Price = 1.
Sell on 5th day. Price = 5. 
Therefore, profit = 5 – 1 = 4.

*/

#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&Price){
    int n = Price.size();
    int sellingDate = 0;
    int buyingDate = 0;
    int maxprofit = 0;
    
    if(n < 2){
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if(Price[i] >= Price[i-1]){
            sellingDate++;
        }else{
        maxprofit += Price[sellingDate] -Price[buyingDate];
        sellingDate = buyingDate = i;
        }
    }
        maxprofit += Price[sellingDate] - Price[buyingDate];
        return maxprofit;
}
int main()
{
    vector<int> prices = { 7, 1, 5, 3, 6, 4 };
    // Function Call to calculate maximum profit possible
    int ans = maxProfit(prices);
    // Print the total profit
    cout << ans << endl;
    return 0;
}