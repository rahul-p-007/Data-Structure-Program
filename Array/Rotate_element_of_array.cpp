//Program to cyclically rotate an array by one
#include<iostream>
using namespace std;
//Function of Program to cyclically rotate an array by one
void RotateCyclic(int arr[],int size){
    int i = 0;
    int j = size -1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
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
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    Print(arr,size);
    RotateCyclic(arr,size);
    cout<<endl;
    Print(arr,size);
    return 0;
}