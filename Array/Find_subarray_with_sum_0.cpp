/*
Given an array of positive and negative numbers, find if there is a subarray (of size at least one) with 0 sum.

Examples: 

Input: {4, 2, -3, 1, 6}
Output: true 
Explanation:
There is a subarray with zero sum from index 1 to 3.

Input: {4, 2, 0, 1, 6}
Output: true
Explanation: The third element is zero. A single element is also a sub-array.

*/
#include<bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[],int size){
    unordered_set<int> sumSet;

    int sum = 0 ;
    for(int i = 0; i<size; i++){
        sum += arr[i];
        if(sum == 0 || sumSet.find(sum) != sumSet.end()){
            return true;
            sumSet.insert(sum);
        }else{
            return false;
        }
    }
}
int main()
{

    int arr[] = {-3, 2, 3, 1, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    if (subArrayExists(arr, N))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}
