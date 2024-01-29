#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int Pow(int a, int n){
    // base case
    if(n==0){
        return 1;
    }
    //rec case
    int ans = a * Pow(a,n-1);

    return ans;
}

int main()
{
    int a,n;
    cin >> a >> n;
    cout << Pow(a,n); 
}


// space = O(n)
// time = O(n)
