// Searching in an array where adjacent differ by at most k
/*
* A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple-element exist to return the first occurrence of the key.
Examples: 
 

 * Input : arr[] = {4, 5, 6, 7, 6}
           k = 1
           x = 6
Output : 2
The first index of 6 is 2.

Input : arr[] = {20, 40, 50, 70, 70, 60}  
          k = 20
          x = 60
Output : 5

*/
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int size ,int key,int difference){
    int i =0;
    while(i < size){
         if(arr[i] == key){
            return i;
         }
        // Jump the difference between current
        // array element and x divided by k
        // We use max here to make sure that i
        // moves at-least one step ahead.
         i = i+ max(1,abs(arr[i] - key)/difference);
    }
    cout<<"Number is not present "<<endl;
    return -1;
}
int main()
{
     int arr[] = {2, 4, 5, 7, 7, 6};
    int x = 6;
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Element " << x  << " is present at index "
         << search(arr, n, x, k);

    return 0;
}