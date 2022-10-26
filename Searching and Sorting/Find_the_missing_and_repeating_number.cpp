/*
Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

Examples: 

Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1

Below are various methods to solve the problems: 
*/
#include <bits/stdc++.h>
using namespace std;
 
void getTwoElements(int arr[], int n)
{
    int repeating(0), missing(0);
 
    int i = 0;
    
    // // Traverse on the array
    // while (i < n)
    // {
       
    //     // If the element is on its correct position
    //     if (arr[i] == arr[arr[i] - 1])
    //         i++;
    //       // If it is not at its correct position 
    //     // then palce it to its correct position
    //       else
    //         swap(arr[i], arr[arr[i] - 1]);
    // }
 
    // Find repeating and missing
    for (int i = 0; i < n; i++) {
       
        // If any element is not in its correct position
        if (arr[i] != i + 1) {
            repeating = arr[i];
            missing = i + 1;
            break;
        }
    }
 
    // Print answer
    cout << "Repeating: " << repeating << endl
         << "Missing: " << missing << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 2, 3, 5, 6, 1 ,1,4,8};
    int n = sizeof(arr) / sizeof(int);
 
    getTwoElements(arr, n);
 
    return 0;
}