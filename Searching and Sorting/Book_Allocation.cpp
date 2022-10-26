// Book Allocation Problem
#include<iostream>
using namespace std;
bool isPossibleSoln(int arr[],int size,int m,int mid){
    int StudentCount = 1;
    int PageCount = 0;
    for(int i = 0; i<size; i++){
        if(PageCount + arr[i] <= mid){
        PageCount += arr[i];
        }else{
            StudentCount++;
            if(StudentCount > m || arr[i] > mid){
                return false;
            }
            PageCount += arr[i];
        }

    }
    return true;
}
// function for Binary Search
int BookAllocation(int arr[],int size,int m){
    int start = 0;
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossibleSoln(arr,size,m,mid)){
            ans = mid;
            end = mid -1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[4] = {12,34,67,90};
    // int arr[4] = {5,5,5,5};
    int Index = BookAllocation(arr,4,2);
    cout<<"Minimum value of  "<<Index<<endl;
    return 0;
}