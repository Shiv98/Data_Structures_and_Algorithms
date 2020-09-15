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
    int li = 0;
    int ri = n-1;
    while(li<ri)
    {
        int temp = arr[li];
        arr[li] = arr[ri];
        arr[ri] = temp;
        li++;
        ri--;
    }
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}