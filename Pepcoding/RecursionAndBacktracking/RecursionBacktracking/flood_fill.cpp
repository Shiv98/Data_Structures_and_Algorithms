/*
You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a. The numbers can be 1 or 0 only.
4. You are standing in the top-left corner and have to reach the bottom-right corner. 
Only four moves are allowed 't' (1-step up), 'l' (1-step left), 'd' (1-step down) 'r' (1-step right). You can only move to cells which have 0 value in them. You can't move out of the boundaries or in the cells which have value 1 in them (1 means obstacle)
5. Complete the body of floodfill function - without changing signature - to print all paths that can be used to move from top-left to bottom-right.
Sample Input
8
8
0 1 0 0 0 0 0 0
0 1 0 1 1 1 1 0
0 1 0 1 0 0 0 0
0 1 0 1 0 1 1 1
0 0 0 0 0 0 0 0
0 1 0 1 1 1 1 0
0 1 0 1 1 1 1 0
0 1 0 0 0 0 0 0
Sample Output
ddddrrttttrrrrrddlllddrrrddd
ddddrrdddrrrrr
ddddrrrrrrrddd
*/

//using vector

#include<bits/stdc++.h>
using namespace std;

void floodfill(vector<vector<int>> maze,int row, int col, string psf,vector<vector<int>> visited)
{
    if(row<0||col<0||row>=maze.size()||col>=maze[0].size()
       ||maze[row][col]==1||visited[row][col]==1){
        return;
    }
    
    if(row==maze.size()-1 && col == maze[0].size()-1)
    {
    cout<<psf<<"\n";
    return;
    }
    
    visited[row][col]=1;
    floodfill(maze,row-1,col,psf+"t",visited);
    floodfill(maze,row,col-1,psf+"l",visited);
    floodfill(maze,row+1,col,psf+"d",visited);
    floodfill(maze,row,col+1,psf+"r",visited);
    visited[row][col]=0;
}

int main()
{
    int n,m,val;
    cin>>n>>m;
    vector<vector<int>> vec;
    vector<vector<int>> visited(n,vector<int>(m,0));
    for(int i = 0;i<n;i++)
    {
        vector<int> v1;
        for(int j = 0;j<m;j++)
        {
            cin>>val;
            v1.push_back(val);
        }
        vec.push_back(v1);
    }
    floodfill(vec,0,0,"",visited);
}


//using 2d array

#include<iostream>
using namespace std;

void floodfill(int **maze,int row, int col,int n, int m, string psf,int **visited)
{
    if(row<0||col<0||row>=n||col>=m||maze[row][col]==1||visited[row][col]==1){
        return;
    }
    
    if(row==n-1 && col == m-1)
    {
    cout<<psf<<"\n";
    return;
    }
    
    visited[row][col]=1;
    floodfill(maze,row-1,col,n,m,psf+"t",visited);
    floodfill(maze,row,col-1,n,m,psf+"l",visited);
    floodfill(maze,row+1,col,n,m,psf+"d",visited);
    floodfill(maze,row,col+1,n,m,psf+"r",visited);
    visited[row][col]=0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int **arr , **visited;
    arr = new int*[n];
    visited = new int*[n];
    for(int i = 0;i<n;i++)
    {	
    	arr[i] = new int[m];
    	visited[i] = new int[m];
        for(int j = 0;j<m;j++)
        cin>>arr[i][j];
    }

   floodfill(arr,0,0,n,m,"",visited);
   delete arr, visited;
}