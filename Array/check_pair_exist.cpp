#include<bits/stdc++.h>
using namespace std;
//Using the Pointer method
bool Check_Pair(int arr[],int size,int k ){
    sort(arr,arr+size);
    int start = 0;
    int end = size -1;
    while(start<end){
        if(arr[start] + arr[end] == k){
            return 1;
        }else if(arr[start] + arr[end] < k){
            start++;
        }else{
            end--;
        }   
    }
    return false;
}

//Using Hashing
void Find_Pair(int arr[],int k,int size){
    unordered_set<int> s;
  
    for(int i =0 ; i<size; i++){
    int temp = k - arr[i];

        if(s.find(temp) != s.end()){
            cout<<"YESSS"<<endl;
            return;
        }
        s.insert(arr[i]);
    }
    cout<<"NOOO!!!"<<endl;
}
int main()
{
    int arr[] = { 1, 4, 45, 6, 10, -8 };
    int k = 14;
    int size = sizeof(arr)/sizeof(int);
    // cout<<"The result :" <<Check_Pair(arr,k,size);
    Find_Pair(arr,k,size);

    return 0;
}