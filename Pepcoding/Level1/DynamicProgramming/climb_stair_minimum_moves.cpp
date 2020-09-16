/*
1. You are given a number n, representing the number of stairs in a staircase.
2. You are on the 0th step and are required to climb to the top.
3. You are given n numbers, where ith element's value represents - till how far from the step you 
     could jump to in a single move.  You can of-course fewer number of steps in the move.
4. You are required to print the number of minimum moves in which you can reach the top of 
     staircase.
Note -> If there is no path through the staircase print null.
Sample Input
10
3
3
0
2
1
2
4
2
0
0
Sample Output
4
*/
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
