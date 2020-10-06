/*
Buy And Sell Stocks With Transaction Fee - Infinite Transactions Allowed
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are give a number fee, representing the transaction fee for every transaction.
4. You are required to print the maximum profit you can make if you are allowed infinite transactions, 
but has to pay "fee" for every closed transaction.
Note - There can be no overlapping transaction. 
One transaction needs to be closed (a buy followed by a sell) before opening another transaction (another buy).
*/

#include<iostream>
using namespace std;
int main()
{
    int n,fee;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++)
        cin>>arr[i];
        
    cin>>fee;
        
    int bsp = -arr[0];
    int ssp = 0;
    
    for(int i = 1;i<n;i++)
    {
        int nbsp , nssp;
        
        if(ssp-arr[i] > bsp) nbsp = ssp-arr[i] ;
        else nbsp = bsp;
        
        if(arr[i] + bsp - fee > ssp) nssp = arr[i] + bsp - fee;
        else nssp = ssp;
        
        bsp = nbsp;
        ssp = nssp;
        //cout<<"b "<<bsp<< " s "<<ssp<<"\n";
            
    }
    cout<<ssp;
    
}