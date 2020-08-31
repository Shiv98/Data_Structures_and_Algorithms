/*

Output:

1	
1	1	
1	2	1	
1	3	3	1	
1	4	6	4	1	
1	5	10	10	5	1

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {   
        int val = 1;
        for(int j = 0;j<=i;j++)
        {
            cout<<val<<"\t";
            val = (val * (i - j)) / (j + 1);
        }
        cout<<"\n";
    }
}