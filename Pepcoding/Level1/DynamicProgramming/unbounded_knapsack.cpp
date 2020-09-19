// Same as 0-1 knapsack, just that can use the same item multiple times.

#include<iostream>
using namespace std;
int main()
{
    int n,cap;
    cin>>n;
    int values[n];
    int weights[n];
    for(int i = 0; i<n;i++)
    {
        cin>>values[i];
    }
    for(int i = 0; i<n;i++)
    {
        cin>>weights[i];
    }
    cin>>cap;
    int dp[cap+1]={0};
    for(int i = 1; i<=cap;i++)
    {
        for(int j = 0 ; j<n;j++)
        {
            int val = values[j];
            int wt = weights[j];

            if(i >= wt)
            {
                int fac= dp[i-wt] + val;
                if(fac> dp[i]){
                       dp[i] = fac;
                   }
            }
        }
    }
    cout<<dp[cap];
}