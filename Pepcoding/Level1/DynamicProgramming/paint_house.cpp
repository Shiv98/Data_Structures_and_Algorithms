/*
Question
1. You are given a number n, representing the number of houses.
2. In the next n rows, you are given 3 space separated numbers representing the cost of painting nth house with red or blue or green color.
3. You are required to calculate and print the minimum cost of painting all houses without painting any consecutive house with same color.
Sample Input
4
1 5 7
5 8 4
3 2 9
1 2 4
Sample Output
8
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    long int red = arr[0][0];
    long int blue = arr[0][1];
    long int green = arr[0][2];
    
    for(int i = 1;i<n;i++)
    {
        int rinc = arr[i][0] + min(blue,green);
        int binc = arr[i][1] + min(red,green);
        int ginc = arr[i][2] + min(blue,red);
        
        red = rinc;
        blue = binc;
        green = ginc;
    }
    
    cout<<min(red,min(blue,green));
}