#include<bits/stdc++.h>
using namespace std;

void gsp(int n,string ans)
{
    if(n<=0)
    {
        if(n==0)
            cout<<ans<<"\n";
        return ;
    }
    
    gsp(n-1,ans+"1");
    gsp(n-2,ans+"2");
    gsp(n-3,ans+"3");
}

int main()
{
    int n;
    cin>>n;
    gsp(n,"");
}