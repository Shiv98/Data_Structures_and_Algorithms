#include<iostream>
using namespace std;

int power(int x, int n)
{
    if(n == 0)
    return 1;

    int temp = power(x,n/2);
    int ans = temp*temp;
    
    if(n%2==1)
    ans = ans * x;
    
    return ans;
}

int main()
{
    int n, x;
    cin>>x>>n;
    int ans = power(x,n);
    cout<<ans;
}