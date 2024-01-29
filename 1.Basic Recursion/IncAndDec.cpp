#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void Increasin(int n){
    if(n == 0) return;
    Increasin(n-1);
    cout << n;
}

void Decreasing(int n){
    if(n == 0) return;
    cout << n;
    Decreasing(n-1);
}


int main()
{
    int n;
    cin >> n;
    Increasin(n);
    Decreasing(n); 
}


// space = O(n)
// time = O(n)
