#include<bits/stdc++.h>
using namespace std;

//Using for Loop

/* 
int Findpair(int arr[],int size,int k){

int count = 0;
for(int i = 0; i<size; i++){
   
   for(int j = i+1; j<size; j++){
    if(arr[i]+arr[j] == k){
        count++;
    }
   }
}
return count;
}
*/


// Using Hasing for twice
int Findpair(int arr[],int size,int k){
    unordered_map<int,int> m;
    for(int i = 0; i<size; i++)
    m[arr[i]]++;

    int twice_count =0;
    for(int i =0; i<size; i++){
        twice_count += m[k-arr[i]];

        if(k-arr[i] == arr[i]){
            twice_count--;
        }
    }
    return twice_count/2;
}
int main()
{
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr)/sizeof(int);
    int k = 2;
    cout<<"The result "<<Findpair(arr,size,k);
    return 0;
}