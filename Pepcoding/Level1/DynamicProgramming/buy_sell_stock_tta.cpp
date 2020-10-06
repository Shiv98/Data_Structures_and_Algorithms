/*
Buy And Sell Stocks - Two Transactions Allowed
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are required to print the maximum profit you can make if you are allowed two transactions at-most.
Note - There can be no overlapping transaction. One transaction needs to be closed
(a buy followed by a sell) before opening another transaction (another buy).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++)
        cin>>arr[i];
        
    int misf = arr[0];
    int ps[n] = {0}, pb[n]={0};
    for(int i = 1; i < n; i++){
        if(arr[i] < misf){
            misf = arr[i];
        }
    
         if(arr[i] - misf > ps[i - 1]){
            ps[i] = arr[i] - misf;
         } else {
            ps[i] = ps[i - 1];
         }
     }

      int masf = arr[n - 1];
      for(int i = n - 2; i >= 0; i--){
         if(arr[i] > masf){
            masf = arr[i];
         }

         if(masf - arr[i] > pb[i + 1]){
            pb[i] = masf - arr[i];
         } else {
            pb[i] = pb[i + 1];
         }
      }

      int mp = INT_MIN;
      for(int i = 0; i < n; i++){
         if(ps[i] + pb[i] > mp){
            mp = ps[i] + pb[i];
         }
      }

      cout<<mp;

}