#include<iostream>
using namespace std;

bool issafeq(int **chess,int n,int row, int col);

void nqueens(int **chess,int n, string ans, int row)
{
    if(row == n)
    {
        cout<<ans<<"."<<"\n";
        return;
    }
    for(int col = 0;col<n;col++)
    {
        if(chess[row][col]==0 && issafeq(chess,n,row,col)==true )
        {
            chess[row][col]=1;
            nqueens(chess,n,ans+to_string(row)+"-"+to_string(col)+", ",row+1);
            chess[row][col]=0;
        }
    }
}

bool issafeq(int **chess,int n,int row, int col)
{
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(chess[i][j] == 1)
            return false;
    }
    
    for(int i = row-1, j = col;i>=0;i--)
    {
        if(chess[i][j]==1)
            return false;
    }
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if(chess[i][j] == 1){
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    int **chess;
    chess = new int*[n];
    for(int i = 0;i<n;i++)
        chess[i] = new int[n];
    
    nqueens(chess,n,"",0);
    delete chess;
}