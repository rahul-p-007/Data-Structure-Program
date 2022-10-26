/*
iven an array of distinct integers and a sum value. Find count of triplets with sum smaller than given sum value. The expected Time Complexity is O(n2).
Examples: 
 

Input : arr[] = {-2, 0, 1, 3}
        sum = 2.
Output : 2
Explanation :  Below are triplets with sum less than 2
               (-2, 0, 1) and (-2, 0, 3) 

Input : arr[] = {5, 1, 3, 4, 7}
        sum = 12.
Output : 4
Explanation :  Below are triplets with sum less than 12
               (1, 3, 4), (1, 3, 5), (1, 3, 7) and 
               (1, 4, 5)
*/

#include<bits/stdc++.h>
using namespace std;
int CountTriplet(int arr[],int size,int sum){
    sort(arr,arr+size);
    int result = 0;
    for(int i = 0; i<size -2; i++){
        int j = i+1;
        int k = size -1;
        while(j<k){
        if(arr[i] + arr[j] + arr[k] >= sum)
            k--;
            else{
                result += (k -j);
                j++;
            }
        }

    }
    return result;

}
int main()
{
    
    int arr[] = {5, 1, 3, 4, 7};
    int n = sizeof arr / sizeof arr[0];
    int sum = 12;
    cout << CountTriplet(arr, n, sum) << endl;
    
    return 0;
}