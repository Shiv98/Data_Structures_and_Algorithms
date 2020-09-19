/*
1. You are given a number n, which represents the length of a road. The road has n plots on it's each side.
2. The road is to be so planned that there should not be consecutive buildings on either side of the road.
3. You are required to find and print the number of ways in which the buildings can be built on both side of roads.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b = 1, s = 1;
    for(int i = 2;i<=n;i++)
    {
        int temp = s;
        s = b+s;
        b = temp;
    }
    long int oneside = b+s;
    cout<<oneside* oneside;
}