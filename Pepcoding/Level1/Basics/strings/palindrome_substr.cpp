/*
1. You are given a string. 
2. You have to print all palindromic substrings of the given string.
*/
#include<iostream>
using namespace std;

bool ispalindrome(string s)
{
    int i = 0, j = s.length() - 1;
	while(i < j)
	{
		if(s.at(i) != s.at(j))
		{
			return false;
		}
			i++;
			j--;
	}
	return true;
}
int main()
{
    string str;
    cin>>str;
    for(int i = 0 ; i< str.length(); i++)
    {
        for(int j = 1; j<=str.length() - i; j++)
        {
            if(ispalindrome(str.substr(i,j))== true)
                cout<<str.substr(i,j)<<"\n";
        }
    }
    
}