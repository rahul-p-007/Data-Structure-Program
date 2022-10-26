#include<bits/stdc++.h>
using namespace std;
void negatiVeandPostive(int arr[],int size){
    int i = 0;
    int j = size -1;
    while(i<= j){
        if(arr[i] < 0){
            i++;
        }else if(arr[j] > 0){
            j--;
        }else{
            swap(arr[i],arr[j]);
        }
        
    }
sort(arr,arr+size);

}
// Printing Function
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()

{

    int arr[] ={1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Print(arr,n);
    cout<<endl;
    negatiVeandPostive(arr,n);
    Print(arr,n);
    return 0;
}