#include<iostream>
using namespace std;
#define R 4
#define C 4
/* int CountRow(bool arr[][4],int row , int col){
    int rowIndex = -1;
    int maxCount = 0;
    for(int i = 0; i<row; i++){
        int count = 0;
        for(int j = 0; j<col; j++){
            if(arr[i][j] == 1){
                count++;
            }
            
        }
        if(count > maxCount){
            maxCount = count;
            rowIndex = i;
        }
    }
    return rowIndex;
} */
//Using Binary Search
int BinarySearch(bool arr[],int low,int high){
    if(high >= low){
        int mid = low + (high - low)/2;
        if((mid == 0) || (arr[mid - 1] == 0) && arr[mid] == 1){
            return mid;
        }
        else if (arr[mid] == 0)
        return BinarySearch(arr,mid+1,high);
        else{
            return BinarySearch(arr,low,mid -1);    
        }

}
return -1;
}
//Function that return index of row with maximum number of 1s
int rowWithMAx1(bool mat[R][C]){
    int max_row = 0,max =-1;
    int index,i;
    for(i = 0; i<R; i++){
        index = BinarySearch(mat[i],0,C-1);
        if(index != -1 && C-index > max){
            max = C-index;
            max_row = i;
        }
    }
    return max_row;
}


int main()
{
    bool arr[4][4] = { { 0,1,1,1 },
                      { 0,0,1,1 },
                      {1,1,1,1 },
                      { 0,0,0,0 } };
    // int Ans = CountRow(arr,4,4);
    // cout<<"Answer is :-> "<<Ans<<endl;
    cout<<"Index of row with maximum 1s is ->"<<rowWithMAx1(arr)<<endl;
    return 0;
}