#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool checkSorted(int arr[], int n){
     // base case
     if(n == 1 || n == 0) return true;

     // rec
     if(arr[0] < arr[1] && checkSorted(arr+1,n-1)){
        return true;
     }
     return false;
}

int main()
{
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr) / sizeof(int);

    cout << checkSorted(arr,n);

    return 0; 
}


// space = O(n)
// time = O(n)
