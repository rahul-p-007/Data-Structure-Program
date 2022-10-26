//Reverse the array
#include<iostream>
using namespace std;
//Reverse Function 
void Reverse(int arr[],int n){
    int start = 0;      //It point to the first element
    int end = n -1;     //It point to the last element
    while(start <=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
//Printing Function
void Print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] = {1,2,2,2,2,2};
    int size = sizeof(arr)/sizeof(int);
    Print(arr,size);
    cout<<endl;
    Reverse(arr,size);
    Print(arr,size);
    return 0;
}