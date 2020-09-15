#include<iostream>
using namespace std;

int power(int n, int x)
{
    if(x == 0)
    return 1;
    
    int ans = n * power(n,x-1);
    return ans;
}
int main()
{
    int n, x;
    cin>>n>>x;
    int ans = power(n,x);
    cout<<ans;
}