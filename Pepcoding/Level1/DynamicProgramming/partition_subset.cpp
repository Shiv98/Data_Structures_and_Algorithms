/*
1. You are given a number n, representing the number of elements.
2. You are given a number k, representing the number of subsets.
3. You are required to print the number of ways in which these elements can be partitioned in k non-empty subsets.
E.g.
For n = 4 and k = 3 total ways is 6
12-3-4
1-23-4
13-2-4
14-2-3
1-24-3
1-2-34
*/
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    
    if (n == 0 || k == 0 || n < k) {
         cout<<0;
         return 0;
      }

      long long int dp[k + 1][n + 1];
      for (int i = 1; i <= k; i++) {
         for (int j = i; j <= n; j++) {
            if (i == 1 || j == 1 || i == j) {
               dp[i][j] = 1;
            } else {
               dp[i][j] = dp[i - 1][j - 1] + i * dp[i][j - 1];
            }
         }
      }
      cout<<dp[k][n];
}