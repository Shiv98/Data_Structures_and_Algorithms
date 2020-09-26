/*1. You are given a number n, representing the count of elements.
2. You are given n numbers, representing n elements.
3. You are required to find the maximum sum of a subsequence with no adjacent elements.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int inc = arr[0];
    int exc = 0;
    
    for(int i = 1;i<n;i++)
    {
        int temp = inc;

        inc = exc+arr[i];
        exc = max(exc,temp);
    }
    cout<<max(inc,exc);
}