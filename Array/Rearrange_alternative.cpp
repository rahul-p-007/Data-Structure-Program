/*
Rearrange array in alternating positive & negative items with O(1) extra space

Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by a negative and vice-versa maintaining the order of appearance. The number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear at the end of the array.

Examples:

Input:  arr[] = {1, 2, 3, -4, -1, 4}
Output: arr[] = {-4, 1, -1, 2, 3, 4}

Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
Output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

*/

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
 
// Partitioning routine of Quicksort
int partition(int A[], int n)
{
    int j = 0;
    int pivot = 0;    // consider 0 as a pivot
 
    // each time we find a negative number, `j` is incremented,
    // and a negative element would be placed before the pivot
    for (int i = 0; i < n; i++)
    {
        if (A[i] < pivot)
        {
            swap(A[i], A[j]);
            j++;
        }
    }
 
    // `j` holds the index of the first positive element
    return j;
}
 
// Function to rearrange a given array such that it contains positive
// and negative numbers at alternate positions
int rearrange(int A[], int size)
{
    // partition a given array such that all positive elements move
    // to the end of the array
    int p = partition(A, size);
 
    // swap alternate negative elements from the next available positive
    // element till the end of the array is reached, or all negative or
    // positive elements are exhausted.
 
    for (int n = 0; (p < size && n < p); p++, n += 2) {
        swap(A[n], A[p]);
    }
}
 


int main()
{
    int arr[] = {1, 2, 3, -4, -1, 4};
    int size = sizeof(arr) / sizeof(int);
    rearrange(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" " ;
    }
    cout << endl;

    return 0;
}