#include<iostream>
using namespace std;
void Rotate_matrix_90_anticlockwise(int arr[][4],int row,int col){
    for(int j = col- 1; j>= 0; j--){
        for(int i = 0; i < row; i++){
            cout<<arr[i][j]<<" ";
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
    Rotate_matrix_90_anticlockwise(arr,4,4);
    return 0;
}