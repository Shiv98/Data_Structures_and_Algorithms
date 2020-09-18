/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number "tar".
4. You are required to calculate and print true or false, if there is a subset the elements of which add 
     up to "tar" or not.
Sample Input
5
4
2
7
1
3
10
Sample Output
true
*/

#include<iostream>
using namespace std;
int main()
{
    int n,tar;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cin>>tar;
    bool dp[n+1][tar+1];
    for(int i = 0 ; i<=n;i++)
    {
        for(int j = 0; j<= tar; j++)
        {
            if(i == 0 and j == 0)
                dp[i][j] = true;
            else if (j == 0)
                dp[i][j]= true;
            else if(i == 0)
                dp[i][j] = false;
            else
            {
                if(dp[i-1][j]==true)
                    dp[i][j]= true;
                else
                {
                    int val = arr[i-1];
                    
                    if(j>= val && dp[i-1][j-val]==true)
                        dp[i][j]= true;
                    
                    else
                        dp[i][j] = false;
                }
            }
        }
    }
    if(dp[n][tar])
        cout<<"true";
    else
        cout<<"false";
    
}