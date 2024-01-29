#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int countBinaryStrings(int n){
    if(n == 1) return 1;

    return countBinaryStrings(n-1) + countBinaryStrings(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << countBinaryStrings(n); 
}


// space = O(n)
// time = O(n)

/* 
-- count no. of binary strings with no consecutive
ones that can formed using binary string of length N
*/