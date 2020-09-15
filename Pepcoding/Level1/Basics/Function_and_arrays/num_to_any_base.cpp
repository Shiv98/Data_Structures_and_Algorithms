// You are required to convert the number n into its corresponding value in base b.

#include<iostream>
#include<cmath>
using namespace std;

int num_to_base(int num, int base)
{
    int tobase = 0,cnt = 0;
    while(num!=0)
    {
        tobase += num%base * pow(10,cnt);
        cnt++;
        num/=base;
    }
    return tobase;
}

int main()
{
    int n,b;
    cin>>n>>b;
    int ans = num_to_base(n,b);
    cout<<ans;
    return 0;
}