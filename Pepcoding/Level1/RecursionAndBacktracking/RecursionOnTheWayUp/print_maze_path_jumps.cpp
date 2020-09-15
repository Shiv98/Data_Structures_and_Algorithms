#include<bits/stdc++.h>
using namespace std;

void gmp(int cr,int cc,int n,int m,string ans)
{
    
    if(cr==n && cc==m)
    {
        cout<<ans<<"\n";
        return;
    }
    
    for(int move = 1;move<=m-cc;move++)
    {
        gmp(cr,cc+move,n,m,ans+"h"+to_string(move));
    }
    for(int move = 1;move<=n-cr;move++)
    {
        gmp(cr+move,cc,n,m,ans+"v"+to_string(move));
    }
    for(int move = 1;move<=m-cc && move <= n-cr;move++)
    {
        gmp(cr+move,cc+move,n,m,ans+"d"+to_string(move));
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    gmp(1,1,n,m,"");
}