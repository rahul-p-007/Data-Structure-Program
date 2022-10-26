//Find first and last positions of an element in a sorted array
#include<iostream>
using namespace std;
//Fuction of Findiing the first and last position of an element in a sorted array
void findFirstAndLast(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout << "First Occurrence = " << first
             << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";
}
//Using Binary Search
int FirstOccurance(int arr[],int size,int k){
    int start = 0;
    int end = size -1;
    int ans = 1;
    int mid = start + (end - start)/2;
    while(start <end){
        if(arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        if(k > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int LastOccurance(int arr[],int size,int k){
    int start = 0;
    int end = size -1;
    int ans = 1;

    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid +1;
        }else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}
int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 8;
    findFirstAndLast(arr,n,x);
    cout<<"\n"<<"First Occurrence = "<<FirstOccurance(arr,n,x)<<endl;
    cout<<"Last Occurrence = "<<LastOccurance(arr,n,x)<<endl;
    return 0;
}