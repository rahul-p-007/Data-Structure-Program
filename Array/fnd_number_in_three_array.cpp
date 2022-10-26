// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

// Examples: 

// Input: 
// ar1[] = {1, 5, 10, 20, 40, 80} 
// ar2[] = {6, 7, 20, 80, 100} 
// ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
// Output: 20, 80

// Input: 
// ar1[] = {1, 5, 5} 
// ar2[] = {3, 4, 5, 5, 10} 
// ar3[] = {5, 5, 10, 20} 
// Output: 5, 5


//Navie Apporoch
/* #include<bits/stdc++.h>
using namespace std;
int FindSimilar(int arr1[],int arr2[],int arr3[],int size1,int size2,int size3){
    int i=0 ,j =0 , k=0;
    while(i<size1 && j < size2 && k < size3){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k] ){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;



        }else if(arr1[i] < arr2[j]){
            i++;
        }else if(arr2[j] < arr3[k]){
            j++;
        }else{
            k++;
        }
    }

}
int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80}; 
int ar2[] = {6, 7, 20, 80, 100} ;
int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int size1 = sizeof(ar1)/sizeof(int);
    int size2 = sizeof(ar2)/sizeof(int);
    int size3 = sizeof(ar3)/sizeof(int);
    FindSimilar(ar1,ar2,ar3,size1,size2,size3);
    
    return 0;
}
*/

// Second Apporoch
#include<bits/stdc++.h>
using namespace std;

void commonElements(vector<int>arr1,vector<int>arr2,vector<int>arr3 ,int n1 ,int n2 ,int n3){

    int Max = INT_MIN;
 
    // deleting duplicates in linear time
    // for arr1
    int res1 = 1;
    for (int i = 1; i < n1; i++) {
        Max = max(arr1[i], Max);
        if (arr1[i] != arr1[res1 - 1]) {
            arr1[res1] = arr1[i];
            res1++;
        }
    }
 
    // deleting duplicates in linear time
    // for arr2
    int res2 = 1;
    for (int i = 1; i < n2; i++) {
        Max = max(arr2[i], Max);
        if (arr2[i] != arr2[res2 - 1]) {
            arr2[res2] = arr2[i];
            res2++;
        }
    }
 
        // deleting duplicates in linear time
        // for arr3
    int res3 = 1;
    for (int i = 1; i < n3; i++) {
        Max = max(arr3[i], Max);
        if (arr3[i] != arr3[res3 - 1]) {
            arr3[res3] = arr3[i];
            res3++;
        }
    }
 
    // creating an array for finding frequency
    vector<int>freq(Max + 1,0);
    for(int i = 0; i<res1; i++){
        freq[arr1[i]]++;
    }
    for(int i = 0; i<res2; i++){
        freq[arr2[i]]++;
    }
    for(int i = 0; i<res3; i++){
        freq[arr3[i]]++;
    }
    for(int i = 0 ; i<=Max; i++){
        if(freq[i]==3){
            cout<<i<< " ";
        }
    }


}
int main()
{
    vector<int>arr1 = { 1, 5, 10, 20, 40, 80 };
vector<int>arr2 = { 6, 7, 20, 80, 100 };
vector<int>arr3 = { 3, 4, 15, 20, 30, 70, 80, 120 };
 
commonElements(arr1, arr2, arr3, 6, 5, 8);
    return 0;
}