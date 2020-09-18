/*
1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a, which represents a gold mine.
4. You are standing in front of left wall and are supposed to dig to the right wall. You can start from 
     any row in the left wall.
5. You are allowed to move 1 cell right-up (d1), 1 cell right (d2) or 1 cell right-down(d3).
6. Each cell has a value that is the amount of gold available in the cell.
7. You are required to identify the maximum amount of gold that can be dug out from the mine.
Sample Input
6
6
0 1 4 2 8 2
4 3 6 5 0 4
1 2 4 1 4 6
2 0 7 3 2 2
3 1 5 9 2 4
2 7 0 8 5 1
Sample Output
33
*/
#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main()
{
    int n,m,maxgold = 0;
    cin>>n>>m;
    int arr[n][m];
    int dp[n][m]={0};
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j = m-1;j>=0;j--)
    {
        for(int i = 0;i<n;i++)
        {
            if(j == m-1)
            {
                dp[i][j]= arr[i][j];
            }
            else if (i == 0)
            {
                dp[i][j]= arr[i][j]+ max(dp[i][j+1],dp[i+1][j+1]);
            }
            else if (i == n-1)
            {
                dp[i][j]= arr[i][j]+ max(dp[i][j+1],dp[i-1][j+1]);
            }
            else
            {
                dp[i][j]= arr[i][j]+ max({dp[i][j+1],dp[i-1][j+1],dp[i+1][j+1]},comp);
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(dp[i][0] > maxgold)
            maxgold = dp[i][0];
    }
    cout<<maxgold;
}