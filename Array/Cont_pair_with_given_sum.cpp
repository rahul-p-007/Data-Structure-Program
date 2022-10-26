/*
Given an array of N integers, and a number sum, the task is to find the number of pairs of integers in the array whose sum is equal to sum.

Examples:  

Input:  arr[] = {1, 5, 7, -1}, sum = 6
Output:  2
Explanation: Pairs with sum 6 are (1, 5) and (7, -1).

Input:  arr[] = {1, 5, 7, -1, 5}, sum = 6
Output:  3
Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).         

*/

#include <bits/stdc++.h>
using namespace std;
 
// Function to find the count of pairs
int getPairsCount(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int count = 0;
    int value = 0;
    int x,y;
    for(int i = 0; i<n-1; i++){
        value = k - arr[i];


        // lower bond 
        x = upper_bound(arr+i+1,arr+n,value) -arr;
        // Upper bond
        y = lower_bound(arr+i+1,arr+n,value) -arr;

        count = count + x - y ;
    }
    return count;
}
 
// Driver code
int main()
{
    int arr[] = { 1, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
 
    // Function call
    cout << "Count of pairs is "
         << getPairsCount(arr, n, k);
    return 0;
}