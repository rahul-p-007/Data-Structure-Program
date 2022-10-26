#include<bits/stdc++.h>
using namespace std;
int FindMajorityElement(int arr[],int size){
    int element = 0;
    // int vote = 0;
    // int candidate = -1;
    int index = -1;
    for(int i = 0; i<size; i++){
        if(element == 0){
            index = arr[i];
            element = 1;
        }else{
            if(arr[i] == index){
                element++;
            }else{
                element--;
            }
        }
    }
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == index){
            count++;
        }
    
    }
    if(count > size/2)
    return index;
    return -1;
}
int main()
{
   int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = FindMajorityElement(arr, n);
    cout << " The majority element is : " << majority;

    return 0;
}