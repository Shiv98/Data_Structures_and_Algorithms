/*

Output:

*	*	*	*	*	*	*	
	*				*	
		*		*	
			*	
		*	*	*	
	*	*	*	*	*	
*	*	*	*	*	*	*	

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nst = n;
    int nsp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= nsp; j++){
            cout<<"\t";
        }

        for(int j = 1; j <= nst; j++){
            if(i > 1 && i <= n / 2 && j > 1 && j < nst){
                cout<<"\t";
            } else {
                cout<<"*\t";
            } 
        }

        if(i <= n / 2){
            nst -= 2;
            nsp++;
        } else {
            nst += 2;
            nsp--;
        }

        cout<<"\n";
    }
}