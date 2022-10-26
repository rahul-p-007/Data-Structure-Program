//Aggressive Cows
#include<iostream>

using namespace std;
//Function for checking the cows
bool isPossiblePosition(int arr[],int size,int cow,int mid){
    int cowCount = 1;
    int Lastposition =arr[0] ;
    for(int i = 0; i< size; i++)
    {
        if(arr[i] - Lastposition >= mid){
            cowCount++;
        if(cowCount == cow){
            return true;
        }
        Lastposition = arr[i];
        }
    }

    return false;
}
//Function for seraching cows
int FindCows(int arr[],int size,int cow){
    int start = 0;
    int maxi = -1;
    for(int i = 0; i<size; i++){
        maxi = max(maxi,arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossiblePosition(arr,size,cow,mid)){
            ans = mid;
            start = mid + 1;

        }else{
            end = mid -1;
        }
         mid = start + (end - start)/2;
    }
    return mid ;
}
int main()
{
      int arr[5] ={4,2,1,3,6};
    int INDex = FindCows(arr,5,2);
    cout<<"Answer is : "<<INDex<<endl;
    return 0;
}