/*
Buy And Sell Stocks - One Transaction Allowed
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are required to print the maximum profit you can make if you are allowed a single transaction.
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
        
    int psit, maxpro = 0, minsofar = INT_MAX;
    
    for(int i = 0 ; i<n ;i++)
    {
        if(arr[i]<minsofar)
            minsofar = arr[i];
        
        psit = arr[i]- minsofar;
        
        if(psit>maxpro)
            maxpro = psit;
    }
    cout<<maxpro;
}