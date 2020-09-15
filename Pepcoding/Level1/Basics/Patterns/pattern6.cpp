/*

Output:

*	*	*		*	*	*
*	*				*	*
*						*
*	*				*	*
*	*	*		*	*	*

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nspaces = 0;
    int nstars = (n/2)+1;
    for (int i =1 ; i<=n;i++)
    {   
        for(int j = 1;j<=nstars; j++ )
        {
            cout<<"*\t";
        }
        for(int j = 0 ; j<2*nspaces;j++)
        {
            cout<<"\t";
        }
        for(int j = 1;j<=nstars; j++ )
        {
            cout<<"\t*";
        }
        if(i <= n/2)
        {
            nstars--;
            nspaces++;
        }
        else
        {
            nstars++;
            nspaces--;
        }
        cout<<"\n";
    }
}