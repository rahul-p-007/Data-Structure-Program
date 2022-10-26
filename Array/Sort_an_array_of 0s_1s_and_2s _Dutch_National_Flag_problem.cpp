//Sort an array of 0s, 1s and 2s | Dutch National Flag problem
#include<iostream>
using namespace std;
//Function for Sort an array of 0s, 1s and 2s | Dutch National Flag problem
int DucthNationFlag(int arr[],int size){
    int low = 0; //Point first element
    int mid = 0; //For comparing the element
    int high = size -1; //Point the last element
    for(int i = 0; i<size; i++){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }else{
            return 0;
        }
    }
    return 1;
}
//Printing Function
void Print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] ={0, 1, 2, 0, 1, 2};
    int size = sizeof(arr)/sizeof(int);
    Print(arr,size);
    cout<<endl;
    DucthNationFlag(arr,size);
    Print(arr,size);
    return 0;
}