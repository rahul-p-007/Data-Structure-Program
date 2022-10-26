//Searching in an array where adjacent differ by at most k
/*
A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple-element exist to return the first occurrence of the key.
Examples: 
 

Input : arr[] = {4, 5, 6, 7, 6}
           k = 1
           x = 6
Output : 2
The first index of 6 is 2.
*/

#include<bits/stdc++.h>
using namespace std;
int FindDifference(int arr[],int size,int key,int diff){
    int i = 0;
    while (i<size)
    {
        if(arr[i] == key)
        return i;
        i = i + max(1,abs((arr[i]-key)/diff));
    }
    cout<<"Thier is not such element"<<endl;
    return -1;
}
int main()
{
    int arr[] = {4,5,6,7,6};
    int size = sizeof(arr)/sizeof(int);
    int diff = 1;
    int key = 6;
    cout<<"The given element at index  "<<FindDifference(arr,size,key,diff)<<endl;
    return 0;
}