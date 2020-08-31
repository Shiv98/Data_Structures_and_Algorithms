/*

Output:

		1	
	2	3	2	
3	4	5	4	3	
	2	3	2	
		1	

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int stars = 1;
    int spaces = n / 2;
    int oval = 1;
    for(int i = 1; i <= n; i++){
        int val = oval;
        for(int j = 1;  j <= spaces; j++){
            cout<<"\t";
        }
        for(int j = 1;  j <= stars; j++){
            cout<<val<<"\t";
            if(j <= stars / 2){
                val++;
            }else{
                val--;
            }
        }
        cout<<"\n";
        if(i <= n / 2){
            oval++;
            stars += 2;
            spaces--;
        }else{
            oval--;
            stars -= 2;
            spaces++;
        }
    }
}