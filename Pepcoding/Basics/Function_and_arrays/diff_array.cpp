/*
Input Format
A number n1
n1 number of elements line separated
A number n2
n2 number of elements line separated
Output Format
A number representing difference of two numbers, represented by two arrays.
*/

#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i = 0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i = 0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    
    int diff[n2];
    int i = n1-1;
    int j = n2-1;
    int b =0;
    while(j>=0)
    {
        int v = i>= 0?arr1[i]:0;
        if(arr2[j] + b >=v)
        {
            diff[j] = arr2[j]+b-v;
            b = 0;
        }
        else
        {
            diff[j] = arr2[j]+b+10-v;
            b = -1;
        }
        i--;
        j--;
        
    }
    int idx = 0;
    while(idx < n2){
      if(diff[idx] != 0){
        break;
      } else {
        idx++;
      }
    }

    while(idx < n2){
      cout<<diff[idx]<<"\n";
      idx++;
    }
    
}
    