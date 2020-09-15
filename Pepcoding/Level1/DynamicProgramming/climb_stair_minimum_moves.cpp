#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dp[n+1];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        dp[i]= -1;
    }
    dp[n]= 0;
    for(int i = n-1; i>= 0; i--)
    {
        if(arr[i]>0)
        {
            int minval = INT_MAX;
            for(int j = 1; j<= arr[i] && i+j <= n; j++)
            {
                if(dp[i + j] != -1)
                    minval = min(minval,dp[i+j]);
            }
            
            if(minval != INT_MAX)
                dp[i] = minval+1;
        }
    }
    cout<<dp[0];
}
