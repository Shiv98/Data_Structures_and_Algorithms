/* 
Buy And Sell Stocks - K Transactions Allowed
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are given a number k, representing the number of transactions allowed.
3. You are required to print the maximum profit you can make if you are allowed k transactions at-most.
Note - There can be no overlapping transaction.
One transaction needs to be closed (a buy followed by a sell) before opening another transaction (another buy). 
*/
#include <iostream>
using namespace std;

int main()
{
      int n,k;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++) {
         cin>>arr[i];
      }

      cin>>k;

      int dp[k + 1][n];

      for(int i = 0; i <= k; i++){
         int fadd = -100000;

         for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if(dp[i - 1][j - 1] - arr[j - 1] > fadd){
                   fadd = dp[i - 1][j - 1] - arr[j - 1];
                }
                
                if(fadd + arr[j] > dp[i][j - 1]){
                   dp[i][j] = fadd + arr[j];
                } else {
                   dp[i][j] = dp[i][j - 1];
                }
            }
         }
      }
      cout<<dp[k][n-1];
}

