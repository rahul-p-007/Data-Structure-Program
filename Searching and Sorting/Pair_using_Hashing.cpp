#include<bits/stdc++.h>
using namespace std;
bool FindPair(int arr[],int size , int n){
    unordered_map<int,int>mapp;
    for(int i = 0; i<size; i++){
        mapp[arr[i]]++;
        if(n== 0 && mapp[arr[i]] >1 )
        return true;
    }
    if(n==0)
    return false;
    for(int i = 0; i<size; i++){
        if(mapp.find(n+arr[i]) != mapp.end()){
            cout<<"Pair Found :"<<arr[i]<<" "<<n+arr[i]<<endl;
            return true;
        }
    }
    cout<<"No Pair is exit "<<endl;
    return false;
}
int main()
{

    int arr[] = { 1, 8, 30, 40, 100 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = -60;
    FindPair(arr, size, n);
    return 0;
}