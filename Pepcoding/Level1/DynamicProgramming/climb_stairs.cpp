/*
1. You are given a number n, representing the number of stairs in a staircase.
2. You are on the 0th step and are required to climb to the top.
3. In one move, you are allowed to climb 1, 2 or 3 stairs.
4. You are required to print the number of different paths via which you can climb to the top.
Sample Input
4
Sample Output
7
*/
#include<iostream>
using namespace std;
int countpath_memo(int n, int arr[])
{
    if(n == 0)
        return 1;
    else if (n <0)
        return 0;
    if(arr[n]>0)
        return arr[n];
    
    int p1 = countpath_memo(n - 1, arr);
    int p2 = countpath_memo(n - 2, arr);
    int p3 = countpath_memo(n - 3, arr);
    int ans = p1+p2+p3;
    arr[n] = ans;
    return ans;
}
int countpath_tabulation(int n)
{
    int arr[n+1];
    arr[0]= 1;
    for(int i = 1;i<=n;i++)
    {
        if(i == 1)
            arr[i] = arr[i-1];
            
        else if(i == 2)
            arr[i] = arr[i-1] + arr[i-2];
            
        else
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    
    return arr[n];
}

int main()
{
    int n,r1,r2;
    cin>>n;
    int arr[n+1] = {0};
    r1 = countpath_memo(n,arr);
    r2 = countpath_tabulation(n);
    cout<<r1;
    cout<<r2;
}