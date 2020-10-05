/*
Buy And Sell Stocks - Infinite Transaction Allowed
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are required to print the maximum profit you can make if you are allowed infinite transactions.

Note - There can be no overlapping transaction. 
One transaction needs to be closed (a buy followed by a sell) before opening another transaction (another buy)
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++)
        cin>>arr[i];
        
    int b = 0,s=0,totp = 0;
    
    for(int i = 1 ; i<n ;i++)
    {
        if(arr[i]<arr[i-1])
        {
            totp += arr[s]-arr[b];
            b= i;
            s= i;
        }
        else
            s++;
    }
    totp += arr[s]-arr[b];
    cout<<totp;
}