/*

Output:

1								1	
1	2						2	1	
1	2	3				3	2	1	
1	2	3	4		4	3	2	1	
1	2	3	4	5	4	3	2	1

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nos = (2*n) - 3;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1; j<=i;j++)
        {
            cout<<j<<"\t";
        }
        for(int j = 0;j<nos;j++)
        {
            cout<<"\t";
        }
        if(i != n)
        {
            for(int j = i;j>=1;j--)
            {
                cout<<j<<"\t";
            }
        }
        else
        {
            for(int j = i-1;j>=1;j--)
            {
                cout<<j<<"\t";
            }
        }
        nos -= 2;
        cout<<"\n";
    }
}