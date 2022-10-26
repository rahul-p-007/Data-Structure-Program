//Square root of an integer
#include<iostream>
using namespace std;
//Function of Square root of an integer using Binary Search
long long int BinarySearchSquareRoot(int x){
    int start = 0;
    int end = x;
    long long int ans =-1;
    long long int mid = start + (end - start)/2;
    while(start <= end){
        long long int square = mid * mid;
        if(square == mid){
            return mid;
        }else if(square < x){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
double morePrecision(int x,int Precision ,int tempSoln){
    double fact =1;
    double ans = tempSoln;
    for(int i = 0; i<Precision; i++){
        fact = fact/10;
        for(double j = tempSoln; j*j < x; j = j+fact){
            ans = j;
        }
    }
    return ans;
}
//For precision we add decimal also

int main()
{
    int a;
    cin>>a;
    int tempSol =BinarySearchSquareRoot(a);
    cout<<tempSol <<" "<<endl;
    cout<<"Answer is "<<morePrecision(a,4,tempSol)<<endl;
    return 0;
}