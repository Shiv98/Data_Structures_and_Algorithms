/*

Output:

*	*   *   *   *
    *   *   *	*	
        *	*	*	
	    	*	*	
            	*

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nspaces = 0;
    int nstars = n;
    
    for(int i = n; i>=1;i--)
    {
        for(int j =0; j<nspaces;j++)
        {
            cout<<"\t";
        }
        for(int j = 0;j<nstars;j++)
        {
            cout<<"*\t";
        }
        nspaces++;
        nstars--;
        cout<<"\n";
    }
}