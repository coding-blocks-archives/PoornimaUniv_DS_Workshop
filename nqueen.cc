// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
const int D = 10;
void clearBoard(char board[][D], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            board[i][j] = 'X';
        }
    }
}

void printboard(char board[][D], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << board[i][j];
        }
        cout << endl;
    }
}

bool canPlace(char board[][D], int r, int c, int n){
    // tell if its possible to keep a queen at r, c of a n*n board
    // check col
    for(int i = 0; i < r; ++i){
        if (board[i][c] == 'Q') return false;
    }

    // primary diagonal
    for(int dist = 1; dist <= r; ++dist){
        int digRow = r - dist;
        int digCol = c - dist;
        if (digRow >= 0 && digCol >= 0 && board[digRow][digCol] == 'Q'){
            return false;
        }
    }

    // secondary diag
    for(int dist = 1; dist <= r; ++dist){
        int digRow = r - dist;
        int digCol = c + dist;
        if (digRow >= 0 && digCol < n && board[digRow][digCol] == 'Q'){
            return false;
        }
    }
    return true;
}

bool solveQueen(char board[][D], int n, int curRow){
    if (curRow == n){
        return true;
    }

    for(int col = 0; col < n; ++col){
        bool successInPlacing = canPlace(board, curRow, col, n);
        if (successInPlacing){
            board[curRow][col] = 'Q';
            bool success = solveQueen(board, n, curRow + 1);
            if (success){
                return true;
            }
            else {
                // unplace the queen
                board[curRow][col] = 'X';
            }
        }
    }
    return false;
}



int main(){
    int n;
    char board[D][D];
    cin >> n;

    clearBoard(board, n);
    bool isSuccessful = solveQueen(board, n, 0);
    if (isSuccessful){
        printboard(board, n);
    }
    else {
        cout << "Sorry Man!! Can't possible to adjust ur queens";
    }

}