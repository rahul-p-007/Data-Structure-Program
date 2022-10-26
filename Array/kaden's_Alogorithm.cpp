//Largest Sum Contiguous Subarray (Kadane’s Algorithm)
#include<iostream>
using namespace std;
//Function Largest Sum Contiguous Subarray (Kadane’s Algorithm)
int MaximumSumArray(int arr[],int size){
    int maxSum= 0;
    int currentSum = 0;
    for(int i =0; i<size; i++){
        currentSum = currentSum + arr[i];
        if(currentSum > maxSum ){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = MaximumSumArray(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}