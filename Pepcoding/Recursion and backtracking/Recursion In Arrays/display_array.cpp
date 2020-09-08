#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    if(n == 0)
    return;
    
    display(arr,n-1);
    cout<<arr[n-1]<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    
    display(arr,n);
}