// Move all negative numbers to beginning and positive to end with constant extra space
#include <iostream>
using namespace std;
// Function for Move all negative numbers to beginning and positive to end with constant extra space
void SwapNegativeInteger(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}

// Printing Function
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Data
    int arr[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Print(arr, size);
    cout << endl;
 
    SwapNegativeInteger(arr, size);
    Print(arr, size);

    return 0;
}
/*
    Apporach Using Ducth national Flag consider one flag (-ve element) and other flag is (+ve element)
    Time complexity: O(N) 
    Auxiliary Space: O(1)
*/