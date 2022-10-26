#include<iostream>
using namespace std;
int findFeasible(int boards[],int n,int limit){
    int sum =0, painters = 1;
    for(int i = 0; i<n; i++){
        sum += boards[i];
        if(sum > limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}
int PrinterParition(int boards[],int n,int m){
    int totalLeght = 0;
    int k=0;
    for(int i =0; i<n; i++){
        k = max(k,boards[i]);
        totalLeght += boards[i];
    }
    int low = k;
    int high = totalLeght;
        int mid = (low + high)/2;
    while(low <high){
        int Painters = findFeasible(boards,n,mid);
        if(Painters <= mid){
            high = mid - 1 ;
        }else{
            low = mid + 1;
        }
        mid = (low + high)/2;
    }
    return low;
}
int main()
{
    int arr[4] = {10,10,10,10};
    int n = 4;
    int m =2;
    cout<<" Minimum time to paint boards : " <<PrinterParition(arr,n,m)<<endl;
    return 0;
}