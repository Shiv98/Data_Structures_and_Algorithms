/*
1. You are given a number n, representing the count of items.
2. You are given n numbers, representing the values of n items.
3. You are given n numbers, representing the weights of n items.
3. You are given a number "cap", which is the capacity of a bag you've.
4. You are required to calculate and print the maximum value that can be created in the bag without 
     overflowing it's capacity.

Note -> Each item can be taken 0 or 1 number of times. You are not allowed to put the same item 
               again and again.
Sample Input
5
15 14 10 45 30
2 5 1 3 4
7
Sample Output
75
*/
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
    int dp[n+1][cap+1] ={0};
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1 ; j<=cap;j++)
        {
            int val = values[i - 1];
            int wt = weights[i - 1];

            if(j >= wt)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt] + val);
            else 
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout<<dp[n][cap];
}