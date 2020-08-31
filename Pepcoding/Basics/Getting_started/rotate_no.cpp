#include<iostream>
using namespace std;
int main()
{
    int n,k,temp,no_d=0;
    cin>>n>>k;
    temp=n;
    while(temp>0)
    {
        no_d++;
        temp/=10;
    }
    
    k = k%no_d;
    if(k<0) k += no_d;
    
    int mult = 1, div = 1;
    for(int i = 1; i<=no_d;i++)
    {
        if(i<=k)
            div*=10;
        else
            mult*=10;
    }
    int quo = n / div;
    int rem = n % div;
    
    int ans = rem * mult + quo;
    cout<< ans;
}