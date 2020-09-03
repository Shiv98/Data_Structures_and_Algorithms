// Show the result of subtraction of two numbers of any base b.
#include<iostream>
#include<cmath>
using namespace std;

int sum(int b, int n1, int n2)
{
    int c = 0, p = 1,ans=0;
    while(n2>0)
    {
        int d1 = n1%10;
        int d2 = n2%10;
        n1/=10;
        n2/=10;
        
        int d = (d2-d1-c);
        if(d<0)
        {
            d += b;
            c = 1;
        }
        else{
            c = 0;
        }
        
        ans += d * p;
        p *= 10;
        
    }
    return ans;
}

int main()
{
    int b,n1,n2;
    cin>>b>>n1>>n2;
    int ans = sum(b,n1,n2);
    cout<<ans;
    return 0;
}