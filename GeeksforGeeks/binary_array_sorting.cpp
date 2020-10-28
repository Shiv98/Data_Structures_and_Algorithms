/**
 * Binary Array Sorting
 * Sort an array of 0s and 1s
 */

#include <bits/stdc++.h> 
using namespace std; 

void segregate0and1(int arr[], int size)  
{  
    
    int left = 0, right = size-1;  
    while (left < right)  
    {  
        
        while (arr[left] == 0 && left < right)  
            left++;  

        while (arr[right] == 1 && left < right)  
            right--;  
  
        if (left < right)  
        {  
            arr[left] = 0;  
            arr[right] = 1;  
            left++;  
            right--;  
        }  
    }  
}  

int main()  
{  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ;i< n; i++) cin>>arr[i];
        segregate0and1(arr, n);  
        for (int i = 0; i < n; i++)  
            cout << arr[i] << " "; 
        
        cout<<"\n";
    }