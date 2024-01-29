#include<iostream>
using namespace std;

bool canPlace(int board[][20], int n, int x, int y){
    // column
    for(int k = 0 ; k < x; k++)
    {
        if(board[k][y] == 1){
            return false;
        }
    }
    // left diag
    int i = x;
    int j = y;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    // right diag
    i = x;
    j = y;
    while (i >= 0 && j >= 0)
    {
        if(board[i][j] == 1) {
            return false;
        }
        i--;
        j++;
    }
    return true;
    
}

void printBoard(int n , int board[][20]){
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool solveNqueen(int n, int board[][20], int i){
    if(i == n){
        //print board
        printBoard(n,board);
        return true;
    }

    // rec case
    // try placing a queen in every row
    for(int j = 0 ; j < n ; j++){
        // current position is safe or not
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;
            bool success = solveNqueen(n,board,i+1);
            if(success){
                return true;
            }
            // backtrack
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int board[20][20] = {0};
    int n;
    cin >> n;
    solveNqueen(n,board,0);
}


// place n queens of n * n, 
// so that no queens attack eachother
// queen can move row, col , diagonally

// print any one configuration
// print all configuration
// total ways