// You are required to convert the number n of any base b into its corresponding decimal value.

#include<iostream>
#include<cmath>
using namespace std;

int num_to_decimal(int num, int base)
{
    int todecimal = 0,p = 0;
    while(num!=0)
    {
        todecimal += num%10 * pow(base,p);
        p++;
        num/=10;
    }
    return todecimal;
}

int main()
{
    int n,b;
    cin>>n>>b;
    int ans = num_to_decimal(n,b);
    cout<<ans;
    return 0;
}