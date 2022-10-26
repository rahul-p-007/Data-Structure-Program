// Type III: At most two transactions are allowed

/* Problem: Given an array price[] of length N which denotes the prices of the stocks on different days. The task is to find the maximum profit possible for buying and selling the stocks on different days using transactions where at most two transactions are allowed.

Note: Stock must be bought before being sold. 

Input: prices[] = {3, 3, 5, 0, 0, 3, 1, 4} 
Output: 6 
Explanation: 
Buy on Day 4 and Sell at Day 6 => Profit = 3 0 = 3 
Buy on Day 7 and Sell at Day 8 => Profit = 4 1 = 3 
Therefore, Total Profit = 3 + 3 = 6

Input: prices[] = {1, 2, 3, 4, 5} 
Output: 4 
Explanation: 
Buy on Day 1 and sell at Day 6 => Profit = 5 1 = 4 
Therefore, Total Profit = 4 

*/

#include<bits/stdc++.h>
using namespace std;
int YouCanAtTwoTime(vector<int>&Prices ){
    if(Prices.size() <= 1)
    return 0;

    int t1Cost = INT_MAX, t2Cost = INT_MAX;
    int profit1 = 0, profit2 = 0;


    for(int Price : Prices){
        t1Cost = min(t1Cost,Price);
        profit1 = max(profit1,Price-t1Cost);


        t2Cost = min(t2Cost,Price - profit1);
        profit2 = max(profit2,Price-t2Cost);
    }
    return profit2;
}
int main()
{
     vector<int> prices = { 3, 3, 5, 0, 0, 3, 1, 4 };
 
    // Function Call
    int ans = YouCanAtTwoTime(prices);
 
    // Answer
    cout << ans << endl;
    return 0;
}