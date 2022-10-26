/*
Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

Examples: 

Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1

*/

#include<bits/stdc++.h>
using namespace std;
int Repeating_and_missing(int arr[],int size){
    int reapeating(0),missing(0);
    int i = 0;
    while(i<size){
        if(arr[i] == arr[arr[i]-1])
        i++;
        else{
            swap(arr[i],arr[arr[i] -1]);
        }
    }
    for(int i = 0; i<size; i++){
        if(arr[i] != i+1){
            missing = i+1;
            reapeating = arr[i];
            break;
        }
    }
    cout<<"Repeating Number is : "<<reapeating<<
    endl<<" Missing Number is : "<<missing<<endl;
}
int main()
{
    
    int arr[] = { 2, 3, 1, 5, 1 };
    int n = sizeof(arr) / sizeof(int);
 
    Repeating_and_missing(arr, n);
    return 0;
}