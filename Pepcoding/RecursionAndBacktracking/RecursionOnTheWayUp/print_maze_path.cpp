#include<bits/stdc++.h>
using namespace std;

void gmp(int cr,int cc,int n,int m,string ans)
{
    if(cr>n || cc>m)
    {
      return;
    }
    
    if(cr==n && cc==m)
    {
        cout<<ans<<"\n";
        return;
    }
    gmp(cr,cc+1,n,m,ans+"h");
    gmp(cr+1,cc,n,m,ans+"v");
}

int main()
{
    int n,m;
    cin>>n>>m;
    gmp(1,1,n,m,"");
}