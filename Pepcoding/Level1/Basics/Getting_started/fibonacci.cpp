#include<iostream>
using namespace std;
int main()
{
    int n,a = 0,b=1,c,i;
    cin>>n;
    for(i = 0 ; i<n;i++)
    {
        cout<<a<<" ";
        c = a+b;
        a = b;
        b = c;
    }
    
}