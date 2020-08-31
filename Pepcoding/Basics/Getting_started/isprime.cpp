#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n,i,flag = 0;
        cin>>n;
        for(i=2;i*i<=n;i++){
            if(n%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        cout<<"prime";
        else
        cout<<"not prime";
        
    }
    return 0;
}