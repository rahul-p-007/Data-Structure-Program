#include <bits/stdc++.h>
using namespace std;
int FindRepative(int arr[], int size)
{

    unordered_set<int> m;

    for(int i = 0; i<size; i++){
        if(m.find(arr[i]) != m.end())
            return arr[i];

            
            m.insert(arr[i]);
        
         }
       
         return -1;
}
int main()
{
    int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int size = sizeof(arr) / sizeof(int);
    cout << FindRepative(arr, size);
    return 0;
}