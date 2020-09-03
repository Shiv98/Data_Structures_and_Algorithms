/*
Draw the bar chart given by nnumbers.

input : 3 1 0 7 5
Output:

			*		
			*		
			*	*	
			*	*	
*			*	*	
*			*	*	
*	*		*	*	

*/



#include<iostream>
using namespace std;

int main()
{
    int n, maxv = -1;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        maxv = max(maxv,arr[i]);
    }
    for(int i = maxv;i>=1;i--)
    {
        for(int val : arr)
        {
            if(val>=i)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<"\n";
    }
    
}