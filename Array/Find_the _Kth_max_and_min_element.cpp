//Find the "Kth" max and min element of an array 
#include<bits/stdc++.h>
using namespace std;
//Function of Find the "Kth" max and min element of an array 
int KthMaxandMin(int arr[],int size,int k){
    sort(arr , arr+size);
    return(arr[size - k]);
}
int main()
{
    int arr[5] = {1,6,72,8,6};
    int size = sizeof(arr)/sizeof(int);
    int k = 1;
    cout<<"The Maximum elemeent "<<KthMaxandMin(arr,size,k)<<endl;

    return 0;
}

//Time Complexity O(n log n);
//Space Complexity O(1);
//Time complexity improve By using heap Data Structure;