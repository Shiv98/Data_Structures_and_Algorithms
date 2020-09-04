// rotate array by k places to right.
#include<iostream>
using namespace std;

int main()
{
    int n,k,ind;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    k = k % n;
    if(k<0)
    k = k + n;
    int ans[n];
    for(int i = 0;i<n;i++)
    {
        ind = i+k<n ? i + k : i + k - n;
        ans[ind] = arr[i];
    }
    for(int i = 0; i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}