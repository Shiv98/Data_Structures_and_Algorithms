/* 
1. You are given a number n representing the length of a floor space which is 2m wide. It's a 2 * n board.
2. You've an infinite supply of 2 * 1 tiles.
3. You are required to calculate and print the number of ways floor can be tiled using tiles.
Sample Input
8
Sample Output
34
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n+1]={0};
    for (int i = 1;i<n+1;i++)
    {
        if(i == 1 || i == 2)
            dp[i]= i;
        else
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
    }
    cout<<dp[n];
    
}