/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are given another number d.
4. You are required find the ceil and floor of d in the array a.

Ceil is defined as value in array which is just greater than d. If an element equal to d exists that will be considered as ceil.
Floor is defined as value in array which is just lesser than d. If an element equal to d exists that will be considered as floor.
Asssumption - Array is sorted.
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
    int l = 0, h = n-1, ceil_v = 0, floor_v = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]<k)
        {
            floor_v = arr[mid];
            l = mid+1;
        }
        else if(arr[mid]>k)
        {
            ceil_v = arr[mid];
            h = mid -1;
        }
        else
        {
            ceil_v = arr[mid];
            floor_v = arr[mid];
            break;
        }
        
    }
    cout<<ceil_v<<"\n"<<floor_v;
    return 0;
}