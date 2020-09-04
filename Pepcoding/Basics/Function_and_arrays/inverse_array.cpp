#include<iostream>
using namespace std;

int main()
{
    int n,ind;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans[n];
    for(int i = 0;i<n;i++)
    {
        ind = arr[i];
        ans[ind] = i;
    }
    for(int i = 0; i<n;i++)
    {
        cout<<ans[i]<<"\n";
    }
}