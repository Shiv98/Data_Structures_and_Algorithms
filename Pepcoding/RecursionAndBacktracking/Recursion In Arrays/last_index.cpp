#include<iostream>
using namespace std;

int f_ind(int arr[],int inx,int x, int n)
{
    if(inx==n-1)
    return -1;

    int l_ind = f_ind(arr,inx+1,x,n);
    
    if(l_ind == -1)
    {
        if(arr[inx]==x)
        return inx;
        else
        return -1;
    }
    else
    return l_ind;
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    
    cin>>x;
    
    int ans =f_ind(arr,0,x,n);
    cout<<ans;
}