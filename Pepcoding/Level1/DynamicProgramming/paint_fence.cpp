/*
1. You are given a number n and a number k in separate lines, representing the number of fences and number of colors.
2. You are required to calculate and print the number of ways in which the fences could be painted so that not more than two consecutive fences have same colors.
Sample input:
5
3
Output:
180
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    
    int end_ii = 0, end_ij = k;
    int tot = end_ii + end_ij;
    
    for(int i = 2;i<=n;i++)
    {
        end_ii = end_ij;
        end_ij = tot  * (k-1);
        tot = end_ii + end_ij;
    }
    
    cout<<tot;
}