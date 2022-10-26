//Search an element in a sorted and rotated Array
#include<iostream>
using namespace std;
//Function of Finding Pivot Element
int Pivot(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
//Function for Searching the element
int BinarySearch(int arr[],int s , int e,int element){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            return mid;
        }else if(element < arr[mid]){
            mid = end - 1;
        }else{
            mid = start + 1;
        }
    }
    return -1;
}

//Function for the element Using Pivot 
int SearchElement(int arr[],int size,int element){
    int PivotElement = Pivot(arr,size);
    if(element >= arr[PivotElement] && element <= arr[size -1]){
        return BinarySearch(arr,PivotElement,size-1,element);
    }else{
        return BinarySearch(arr,0,PivotElement-1,element);
    }
}
int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    cout<<"Pivot Element "<<Pivot(arr,5)<<endl;
    int SearChElemet = SearchElement(arr,5,2);
    cout<<"Searching element at the index : "<<SearChElemet<<endl;
    return 0;
}