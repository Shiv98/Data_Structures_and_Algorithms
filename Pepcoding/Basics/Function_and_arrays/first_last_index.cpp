/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.

Asssumption - Array is sorted. Array may have duplicate values.
Input Format
A number n
n1
n2
.. n number of elements
A number d
Output Format
A number representing first index
A number representing last index
*/
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    int left = 0,right = n-1,fi = -1,li = -1 ;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        right = mid - 1;
        else if(arr[mid]<k)
        left = mid+ 1;
        else
        {
          li = mid;
          left = mid + 1;
        }
        
    }
    left = 0;
    right = n-1;
    
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        right = mid - 1;
        else if(arr[mid]<k)
        left = mid+ 1;
        else
        {
          fi = mid;
          right = mid - 1;
        }
        
    }
    cout<<fi<<"\n"<<li;
}
