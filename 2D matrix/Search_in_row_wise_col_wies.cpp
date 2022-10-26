//Search in a row wise and column wise sorted matrix
#include<iostream>
using namespace std;
//Function for searching  in a row wise and column wise sorted matrix
int searchElement(int matrix[4][4],int n,int x){
    //base case 
    if(n==0){
        return -1;
    }
    int smallest = matrix[0][0];
    int largerst = matrix[n-1][n-1];

    if(x < smallest || x > largerst){
        return -1;
    }
    //set indexing for top right element
    int i = 0;
    int j = n - 1;
    while(i < n && j >= 0){
        if(matrix[i][j] == x){
            cout<<"Element found at "<<i<<","<<j;
            return 1;
        }
        if(matrix[i][j] > x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<endl<<"Element not found "<<endl;
    return 0;
}
int main()
{
      int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    searchElement(mat, 4, 29);
    return 0;
}