// You are required to convert the number n of any base b1 into its corresponding value in base b2.
#include<iostream>
#include<cmath>
using namespace std;

int num_to_decimal(int num, int b1, int b2)
{
    int ans = 0,decimal=0,p = 0;
    while(num!=0)
    {
        decimal += num%10 * pow(b1,p);
        p++;
        num/=10;
    }
    p = 0;
    while(decimal!=0)
    {
        ans += decimal%b2 * pow(10,p);
        p++;
        decimal/=b2;
    }
    return ans;
}

int main()
{
    int n,b1,b2;
    cin>>n>>b1>>b2;
    int ans = num_to_decimal(n,b1,b2);
    cout<<ans;
    return 0;
}