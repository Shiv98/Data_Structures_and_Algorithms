/*
1.You are given a number n and a number m representing number of rows and columns in a maze.
2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).

Input Format
A number n
A number m
Output Format
Contents of the arraylist containing paths as shown in sample output
Constraints
0 <= n <= 10
0 <= m <= 10
Sample Input
3
3
Sample Output
[hhvv, hvhv, hvvh, vhhv, vhvh, vvhh]
*/
#include<bits/stdc++.h>

using namespace std;

vector<string> gmp(int sr, int sc, int n, int m)
{
    if(sr>n || sc>m)
    {
        vector <string> ans;
        return ans;
    }
    
    if(sr==n && sc==m)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    
    vector <string> smph = gmp(sr,sc+1,n,m);
    vector <string> smpv = gmp(sr+1,sc,n,m);
    vector <string> paths;
    
    for(string p : smph)
    paths.push_back("h"+p);
    
    for(string p : smpv)
    paths.push_back("v"+p);
    
    return paths;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<string> ans = gmp(1,1,n,m);
    cout<<"[";
    for(int i = 0 ; i < ans.size() ; i++){
        if(i != ans.size()-1)
        cout<<ans[i]<<", ";
        
        else
        cout<<ans[i];
    }
    cout<<"]";
}