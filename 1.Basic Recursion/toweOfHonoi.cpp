#include<iostream>
using namespace std;

void towerOfHonoi(int n, char fromRod, char helper, char toRod){
    // place n disc from a to c using B
    // f(n,from,helper,to) = f(n-1,from,to,helper)
    // f(n-1,from,to,helper)
    // f -> t
    // f(n-1,helper,from,to)

    //cout << n << " -> " << fromRod << " -> " << helper << " -> " << toRod << endl;

    if(n == 0) return;

    towerOfHonoi(n-1,fromRod,toRod,helper);
    //cout << fromRod << " -> " << toRod << "\n";

    towerOfHonoi(n-1,helper,fromRod,toRod);
    // cout << helper << "->" << toRod << "\n";
}

int main()
{
    int n;
    cin >> n;
    towerOfHonoi(n,'A','B','C');
}

// ans = 2^n -1 
