#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }else if(arr[mid] < key){
            return binarySearch(arr,mid+1,high,key);
        }else{
            return binarySearch(arr,low,mid-1,key);
        }
        
}
return -1;
}
int FindDistanceOfArray(int arr[], int key)
{   
    int low = 0;
    int high = 1;
    int value = arr[0];
    
    while(value < key){
        low = high;
        high = 2*high;
        value = arr[high];
    }

   return  binarySearch(arr,low,high,key);
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,
                 140, 160, 170};
    int ans = FindDistanceOfArray(arr, 10);
    if (ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    
    return 0;
}