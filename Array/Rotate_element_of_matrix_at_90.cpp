#include<iostream>
using namespace std;
void RotateMatraix90(int arr[][4],int row,int col){
        for(int i = col-1; i>=0; i--){
    for(int j =0 ; j<row; j++){
            cout<<arr[j][i]<< " ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    RotateMatraix90(arr,4,4);
    return 0;
}