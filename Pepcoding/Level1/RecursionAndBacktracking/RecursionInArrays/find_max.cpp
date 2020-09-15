#include<iostream>
using namespace std;

int findmax(int arr[],int ind, int n)
{
    if(ind == n-1)
    return arr[ind];
    
    int misa = findmax(arr, ind + 1, n);
      if(misa > arr[ind]){
         return misa;
      } else {
         return arr[ind];
      }
    
} 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    
    int ans =findmax(arr,0,n);
    cout<<ans;
}