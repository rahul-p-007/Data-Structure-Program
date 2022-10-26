/*
Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

Examples: 

Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80

*/

#include<bits/stdc++.h>
using namespace std;
void findTripletPair(int arr1[],int arr2[],int arr3[],int n,int m , int o){
  int i= 0,j=0,k=0;
  while (i<n && j< m && k<o)
  {
    if(arr1[i] == arr2[j] && arr2[j]==arr3[k]){
        cout<<arr1[i]<<" ";
        i++;
        j++;
        k++;
    }else if(arr1[i] < arr2[j]){
        i++;    
        
        }else if(arr2[j] < arr3[k]){
            j++;
        }else{
            k++;
        }
  }
  
}
int main()
{
 int ar1[] = {1, 5, 10, 20, 40, 80}; 
int ar2[] = {6, 7, 20, 80, 100} ;
int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}; 

int size1 = sizeof(ar1)/sizeof(int);
int size2 = sizeof(ar2)/sizeof(int);
int size3 = sizeof(ar3)/sizeof(int);
findTripletPair(ar1,ar2,ar3,size1,size2,size3);
    return 0;
}