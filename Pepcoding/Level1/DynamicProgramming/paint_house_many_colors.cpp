/*
1. You are given a number n and a number k separated by a space, representing the number of houses and number of colors.
2. In the next n rows, you are given k space separated numbers representing the cost of painting nth house with one of the k colors.
3. You are required to calculate and print the minimum cost of painting all houses without painting any consecutive house with same color.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n][k];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<k;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int min = INT_MAX;
    int smin = INT_MAX;
    
    for(int j = 0;j<k;j++)
    {
        if(arr[0][j] <= min){
            smin = min;
            min = arr[0][j];
        } else if(arr[0][j] <= smin){
            smin = arr[0][j];
        }
    }
    
    for(int i = 1;i<n;i++)
    {
        int cmin = INT_MAX;
        int csmin = INT_MAX;

        for(int j = 0; j < k; j++){
            if(arr[i - 1][j] != min){
                arr[i][j] += min;
            } else {
                arr[i][j] += smin;
            }

            if(arr[i][j] <= cmin){
                csmin = cmin;
                cmin = arr[i][j];
            } else if(arr[i][j] <= csmin){
                csmin = arr[i][j];
            }
        }

        min = cmin;
        smin = csmin;
    }
    cout<<min;
}