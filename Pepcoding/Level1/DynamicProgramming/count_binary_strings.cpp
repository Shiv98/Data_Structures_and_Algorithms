//1. You are given a number n.
//2. You are required to print the number of binary strings of length n with no consecutive 0's.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ones = 1, zeros = 1;
    for(int i = 2;i<=n;i++)
    {
        int temp = ones;
        ones = zeros+ones;
        zeros = temp;
    }
    cout<<ones+zeros;
}