/*
Input Format
A number n1
n1 number of elements line separated
A number n2
n2 number of elements line separated
Output Format
A number representing sum of two numbers, represented by two arrays.
*/
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i = 0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i = 0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int ss = n1>n2?n1:n2;
    int sum[ss];
    int i = n1 - 1;
    int j = n2 - 1;
    int k = ss - 1;
    int c = 0;
    while(i>=0||j>=0)
    {
        int d = c;
        if(i>=0)
            d += arr1[i];
        if(j>=0)
            d+= arr2[j];
            
        c = d/10;
        d = d%10;
        
        sum[k]= d;
        i--;
        j--;
        k--;
    }
    if(c != 0)
    cout<<c<<"\n";
    for(int val : sum)
        cout<<val<<"\n";
}