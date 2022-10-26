/*
⁡⁢⁣⁣Given an array of integers, find anyone combination of four elements in the array whose sum is equal to a given value X.
⁡⁡
For example, 
*Input: array = {10, 2, 3, 4, 5, 9, 7, 8} 
 *      X = 23 
!Output: 3 5 7 8
?Sum of output is equal to 23, 
⁡⁣⁢⁣i.e. 3 + 5 + 7 + 8 = 23.
⁡
Input: array = {1, 2, 3, 4, 5, 9, 7, 8}
       X = 16 
Output: 1 3 5 7
Sum of output is equal to 16, 
i.e. 1 + 3 + 5 + 7 = 16.
*/

#include<bits/stdc++.h>
using namespace std;
bool FindForth(int arr[],int n,int key){
    for(int i = 0; i<n-3; i++){
        for(int j = i+1; j<n-2; j++){
            for(int k = j+1; k<n-1; k++){
                for(int l = k+1; l<n; l++){
                    if(arr[i]+arr[j]+arr[k] + arr[l] == key){
                        cout<<"Pair are : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<< " "<<arr[l]<<endl;
                        return true;
                        break;
                    }
                }
            }
        }
    }
    cout<<"Pair are not found contact us later "<<endl;
    return false;
}
int min()
{
    int array[] = {10, 2, 3, 4, 5, 9, 7, 8} ;
    int  X = 23; 
    int n = sizeof(array)/sizeof(int);
    FindForth(array,n,X);
    return 0;
}