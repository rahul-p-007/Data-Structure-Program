/*

Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n. 
Examples: 

*Input: arr[] = {5, 20, 3, 2, 50, 80}, n = 78
!Output: Pair Found: (2, 80)

*Input: arr[] = {90, 70, 20, 80, 50}, n = 45
!Output: No Such Pair
*/

#include<bits/stdc++.h>
using namespace std;
bool FindPair(int arr[],int size, int key){
    sort(arr,arr+size);
    int i = 0;
    int j = 1;
    int n = abs(key);
    while(i<=j and j<size){
        int diff = arr[j] - arr[i];
        if(i != j  and diff == n){
            cout<<"Pair are : "<<arr[j]<<" "<<arr[i];
            return true;
        }else if( diff > n){
            j++;
        }else{
            i++;
        }
    }
    cout<<"Thier are no such exit Plz enter valid value "<<endl;
    return false;
}
int main()
{
    int arr[] ={7,5,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    int key = 1;
    FindPair(arr,size,key);
    return 0;
}