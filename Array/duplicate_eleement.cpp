//Find duplicates in O(n) time and O(1) extra space 
/*
Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

Example: 

Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
Output: 1, 3, 6

Explanation: The numbers 1 , 3 and 6 appears more
than once in the array.

Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
Output: 3

⁡⁢⁣⁢𝔼𝕩𝕡𝕝𝕒𝕟𝕒𝕥𝕚𝕠𝕟: 𝕋𝕙𝕖 𝕟𝕦𝕞𝕓𝕖𝕣 𝟛 𝕒𝕡𝕡𝕖𝕒𝕣𝕤 𝕞𝕠𝕣𝕖 𝕥𝕙𝕒𝕟 𝕠𝕟𝕔𝕖⁡
in the array.

*/
#include<bits/stdc++.h>
using namespace std;
/* int DuplicateElement(int arr[],int size)
{
    int low = 0;
    int high = size -1;
    vector<int> temp;
    while(low < high){
        if(arr[low] == arr[high]){
            temp.push_back(arr[low]);
            high--;
            low++;
        }else if(arr[low] < arr[high]){
            low++;
        }else{
            high--;
        }
    }
    for(int i = 0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    return -1;

}
*/
int main()
{
    int arr[] = {1, 2, 3, 4 ,3};
    int size = sizeof(arr)/sizeof(int);
    // DuplicateElement(arr,size);
    for(int i = 0; i < size; i++){
        arr[arr[i]% size] = arr[arr[i]% size] + size;
    }
    cout<<"The Repeating Elemeent"<<endl;
    for(int i = 0; i< size; i++){
        if(arr[i] >= size*2){
            cout<<i<<" ";
        }
    }
    return 0;
}