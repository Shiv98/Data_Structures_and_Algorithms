/*
Question
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number "tar".
Sample Input
5
10
20
30
40
50
60
Sample Output
10, 20, 30, .
10, 50, .
20, 40, .
*/
#include<iostream>
using namespace std;

void targetss(int arr[],int n,int ind,string set, int sos, int tar)
{
    if(sos>tar)
    return;
    
    if(ind == n)
    {
        if(sos==tar)
        cout<<set<<"."<<"\n";
        return;
    }
    
    targetss(arr,n,ind+1,set + to_string(arr[ind]) + ", ", sos + arr[ind],tar);
    targetss(arr,n,ind+1,set,sos,tar);
}

int main()
{
    int n, tar;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>tar;
    targetss(arr,n,0,"",0,tar);
}