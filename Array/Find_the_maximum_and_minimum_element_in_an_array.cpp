//Find the maximum and minimum element in an array
#include<iostream>
using namespace std;
//Maximum and Minimum Function
int MaxElement(int arr[],int size){
    int maxi = INT16_MIN; //Insiliaze to minimum element
    for(int i = 0; i<size; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int MiniElement(int arr[],int size){
    int mini = INT16_MAX; //Insiliaze to maximum element 
    for(int i = 0; i<size; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}
//Printing Function
void Print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] = {0,2,33,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    Print(arr,size);
    cout<<endl;
    cout<<"Maximum element : "<<MaxElement(arr,size)<<" "<<"Minimum element : "<<MiniElement(arr,size);
    cout<<endl;

    return 0;
}

//Time Complexity O(n**2) (We can get O(n) by declaring both function in one Function)
//Space Complexity O(1)