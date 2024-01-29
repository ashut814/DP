/*
given - 4 x n board
and tiles 4 x 1
count no. of ways to tile the given board

-- a tile can either be placed horizontly i.e., 
1 x 4 or vertically i.e., 4 x 1
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int noOfWays(int n){
    // base case
    if(n <= 3){
        return 1;
    }
    //rec case
    int ans = noOfWays(n-1) + noOfWays(n-4);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << noOfWays(n); 
}


// f(n) = f(n-1) + f(n-4);
// space = O(n)
// time = O(n)
