#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int fib(int n){
    // base case
    if(n==0 || n == 1){
        return 1;
    }
    //rec case
    int ans = fib(n-1) + fib(n-2);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n); 
}


// space = O(n)
// time = O(n)
