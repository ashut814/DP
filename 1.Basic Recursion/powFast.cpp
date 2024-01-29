#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int fastPow(int a, int n){
    // base case
    if(n==0){
        return 1;
    }
    // a^n = (a^n/2)-- if n is even
    // a(a^n/2)^2 -- if n is odd
    // 2^7 = 2 * (2^3)^2

    int subprob = fastPow(a,n/2);
    int subprobSquare = subprob*subprob;
    if(n&1){
        return a*subprobSquare;
    }
    return subprobSquare;
}

int main()
{
    int a,n;
    cin >> a >> n;
    cout << fastPow(a,n); 
}


// space = O(n)
// time = O(n)
