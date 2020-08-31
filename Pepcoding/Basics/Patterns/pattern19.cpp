/*

Output:

*	*	*	*			*	
			*			*	
			*			*	
*	*	*	*	*	*	*	
*			*				
*			*				
*			*	*	*	*	


*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        if(i == 0)
        {
            for(int j = 0;j<n;j++)
            {
                if(j<=n/2 || j == n-1)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        else if(i < n/2)
        {
            for(int j = 0;j<n;j++)
            {
                if(j==(n/2)|| j == n-1)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        else if(i == n/2)
        {
            for(int j = 0;j<n;j++)
                    cout<<"*\t";
        }
        else if(i == n-1 )
        {
            for(int j = 0;j<n;j++)
            {
                if(j>=n/2 || j == 0)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        else
        {
            for(int j = 0;j<n;j++)
            {
                if(j==(n/2) || j == 0)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        cout<<"\n";
        
    }
}