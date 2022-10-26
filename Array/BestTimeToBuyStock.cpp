// Type I: At most one transaction is allowed
/* Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible for buying and selling the stocks on different days using transactions where at most one transaction is allowed.

Note: Stock must be bought before being sold.

Examples:

Input: prices[] = {7, 1, 5, 3, 6, 4]
Output: 5
Explanation:
The lowest price of the stock is on the 2nd day, i.e. price = 1. Starting from the 2nd day, the highest price of the stock is witnessed on the 5th day, i.e. price = 6. 
Therefore, maximum possible profit = 6 – 1 = 5. 
*/

#include<bits/stdc++.h>
using namespace std;
int maxProfit(int Prices[],int n){
    int buy = Prices[0],maxProfit = 0;
    for(int i =1; i<n; i++){
        //checking for lower value
        if(buy>Prices[i]){
            buy = Prices[i];
        }
        //checking for higher profit
        else if(Prices[i] - buy > maxProfit){
            maxProfit = Prices[i] - buy;
        }
    }
    return maxProfit;
}
int main()
{
    int prices[] = { 7, 1, 5, 6, 4 };
    int n = sizeof(prices) / sizeof(prices[0]);
    int max_profit = maxProfit(prices, n);
    cout << max_profit << endl;
    return 0;
}
