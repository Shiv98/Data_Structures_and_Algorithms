/*
1. You are given a number n, the size of a chess board.
2. You are given a row and a column, as a starting point for a knight piece.
3. You are required to generate the all moves of a knight starting in (row, col) such that knight visits 
     all cells of the board exactly once.
4. Complete the body of printKnightsTour function - without changing signature - to calculate and 
     print all configurations of the chess board representing the route
     of knight through the chess board.
*/
#include<iostream>
using namespace std;

void displayBoard(int **chess, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<to_string(chess[i][j]) + " ";
        }
        cout<<"\n";
    }

    cout<<"\n";
}

void printKnightsTour(int **chess,int n, int r, int c, int upcomingMove)
{
    if(r < 0 || c < 0 || r >= n || c >= n || chess[r][c] != 0)
        return;
    else if(upcomingMove == n * n)
    {
        chess[r][c] = upcomingMove;
        displayBoard(chess,n);
        chess[r][c] = 0;    
        return;
    }

    chess[r][c] = upcomingMove;
    printKnightsTour(chess, n, r - 2, c + 1, upcomingMove + 1);
    printKnightsTour(chess, n, r - 1, c + 2 , upcomingMove + 1);
    printKnightsTour(chess, n, r + 1, c + 2 , upcomingMove + 1);
    printKnightsTour(chess, n, r + 2, c + 1 , upcomingMove + 1);
    printKnightsTour(chess, n, r + 2, c - 1 , upcomingMove + 1);
    printKnightsTour(chess, n, r + 1, c - 2 , upcomingMove + 1);
    printKnightsTour(chess, n, r - 1, c - 2 , upcomingMove + 1);
    printKnightsTour(chess, n, r - 2, c - 1 , upcomingMove + 1);
    chess[r][c] = 0;
}

int main()
{
    int n,r,c;
    cin>>n>>r>>c;
    int **chess;
    chess = new int*[n];
    for(int i = 0;i<n;i++)
        chess[i] = new int[n];

    printKnightsTour(chess, n, r, c, 1);
}

   
    


                        


                        