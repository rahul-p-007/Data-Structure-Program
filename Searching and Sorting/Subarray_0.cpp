/*
Given an array, print all subarrays in the array which has sum 0.

Examples: 

Input:  arr = [6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7]
Output:  
Subarray found from Index 2 to 4
Subarray found from Index 2 to 6          
Subarray found from Index 5 to 6
Subarray found from Index 6 to 9
Subarray found from Index 0 to 10
*/


#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> FindSubArray(int arr[],int n){
    vector<pair<int , int>> out;
    int sum = 0;
    //create an empty map 
    unordered_map<int , vector<int>>map;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(sum==0){
            out.push_back(make_pair(0,i));
        }
        if(map.find(sum) != map.end())
        {
            vector<int> vc = map[sum];
            for(auto it = vc.begin(); it != vc.end(); it++){
                out.push_back(make_pair(*it+1,i));
            }
        }
        map[sum].push_back(i);
    }
    return out;
}
void print(vector<pair<int, int>> out)
{
    for (auto it = out.begin(); it != out.end(); it++)
        cout << "Subarray found from Index " <<
            it->first << " to " << it->second << endl;
}
int main()
{
     int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    vector<pair<int, int> > out = FindSubArray(arr, n);
  
    // if we didn’t find any subarray with 0 sum,
    // then subarray doesn’t exists
    if (out.size() == 0)
        cout << "No subarray exists";
    else
        print(out);
  
    
    return 0;
}