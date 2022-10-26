#include<iostream>
#include<vector>
using namespace std;
vector <int> SpiralOrder(vector<vector<int>> & matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    //Insiliaze the index
    int startRow = 0;
    int startCol = 0;
    int endingRow = row -1;
    int endingCol = col - 1;
    int count =0;
    vector <int> ans;
    int total = row * col;
    
    while(count < total){
        //Starting Row
        for(int index = startCol; count < total && index <= endingCol; index++){
            ans.push_back(matrix[startRow][index]);
            count++;
        }
            startRow++;
        //Ending Col
        for(int index = startRow; count < total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
            endingCol--;
        //Ending Row
        for(int index = endingCol; count < total && index >= startCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
            endingRow--;
        //Starting Col
        for(int index = endingRow; count < total && index >= startRow; index--){
            ans.push_back(matrix[index][startCol]);
            count++;
        }
            startCol++;
    }
        return ans;
}
int main()
{
    vector<vector<int>> a{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int x : SpiralOrder(a)){
        cout<<x<<" ";
    }
    return 0;
}