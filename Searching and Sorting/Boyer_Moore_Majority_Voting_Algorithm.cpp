//Boyer-Moore Majority Voting Algorithm
#include<iostream>
using namespace std;
int MajorityElement(int arr[],int size){
    int vote = 0,canditates = -1,i;
    for(i = 0; i<size; i++){
        if(vote == 0){
            canditates = arr[i];
            vote = 1;
        }else{
            if( arr[i] == canditates){
                vote++;
            }else{
                vote--;
            }
        }
    }
  
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == canditates){
            count++;
        }
    }
    if(count > size/2)
    return canditates;
    return -1;
     
}
int main()
{
    int arr[] = { 2, 2, 2, 1, 3, 3, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = MajorityElement(arr, n);
    cout << " The majority element is : " << majority;
    return 0;
}