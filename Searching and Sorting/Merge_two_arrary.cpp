/*

Given two sorted arrays, the task is to merge them in a sorted manner.
Examples: 

Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
Output: arr3[] = {4, 5, 7, 8, 8, 9} 

*/

#include<bits/stdc++.h>
using namespace std;
int MergeArray(int arr1[],int n,int arr2[],int m,int size){
    int i = 0;
    int j = 0;
    int k = 0;
    int arr3[size];
    while(i<n&&j <m){
        if(arr1[i] < arr2[j]){
           arr3[k++] =  arr1[i++] ;
        }else{
             arr3[k++] = arr2[j++] ;
        }
    }
    while(i < n){
          arr3[k++] = arr1[i++];

    }
    while(j < m){
         arr3[k++] = arr2[j++] ;
    }
    //Print The Array
    for(int i = 0; i<size; i++){
        cout<<arr3[i]<<" ";
    }
}
int main()
{
   int arr1[] = { 1, 3, 4, 5};
   int arr2[] = {2, 4, 6, 8};
   int n = sizeof(arr1)/sizeof(int); 
   int m = sizeof(arr2)/sizeof(int);
   int size = m+n;
   MergeArray(arr1,n,arr2,m,size); 

    return 0;
}