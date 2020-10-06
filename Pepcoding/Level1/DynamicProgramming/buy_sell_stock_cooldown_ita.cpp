/*
Buy And Sell Stocks With Cooldown - Infinite Transaction Allowed
Question
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are required to print the maximum profit you can make if you are allowed infinite transactions,
but have to cooldown for 1 day after 1 transaction
i.e. you cannot buy on the next day after you sell, 
you have to cooldown for a day at-least before buying again.
Note - There can be no overlapping transaction. 
One transaction needs to be closed (a buy followed by a sell) before opening another transaction (another buy).
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;  i< n; i++)
        cin>>arr[i];
        
    int bsp = -arr[0], ssp = 0 , csp = 0, nbsp, nssp ;
    for(int i = 1;i<n;i++)
    {
        if(csp - arr[i] > bsp) nbsp = csp - arr[i];
        else nbsp = bsp;
        
        if(bsp+arr[i] > ssp) nssp = bsp+arr[i];
        else nssp = ssp;
        
        csp = ssp;
        bsp = nbsp;
        ssp = nssp;
    }
    cout<<ssp;
}
