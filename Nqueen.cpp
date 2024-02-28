/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

void printsol(int n, vector<vector<char>> &board){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j]<< " "; 
        }
        cout<< endl;
    }
    cout<< endl << endl;
}

bool isSafe(vector<vector<char>> &board, int n, int  col, int row){
    int i=row;
    int j=col;
    
    // left
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    
    //upper diagonal
    i= row;
    j= col;
    
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    
    // lower diagonal
    i= row;
    j= col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve( vector<vector<char>> &board, int n,int  col){
    
    // Base Case
    if(col >= n){
        printsol(n, board);
        return;
    }
    
    // Recursion
    for(int row=0; row<n; row++){
        
        if (isSafe(board, n, col, row)){
            
         board[row][col]='Q';
         
         solve(board, n, col+1);
         // backtracking
        board[row][col]='-';
        }
        
    }
}

int main()
{
    int n=8;
   vector<vector<char>> board(n, vector<char>(n,'-'));
   int col=0;
   
   solve(board, n, col);

    return 0;
}
