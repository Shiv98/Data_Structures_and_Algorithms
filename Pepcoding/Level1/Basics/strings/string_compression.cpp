/*
1. You are given a string. 
2. You have to compress the given string in the following two ways - 
   First compression -> 
   The string should be compressed such that consecutive duplicates
   of characters are replaced with a single character.
   For "aaabbccdee", the compressed string will be "abcde".
   Second compression -> 
   The string should be compressed such that consecutive duplicates of characters are replaced 
   with the character and followed by the number of consecutive duplicates.
   
   For "aaabbccdee", the compressed string will be "a3b2c2de2".
*/
#include<iostream>
#include<string>
using namespace std;

string compression1(string str)
{
    string ans="";
    ans += str[0];
	for(int i = 1 ; i < str.length(); i++)
	{
	    char curr = str.at(i);
	    char prev = str.at(i-1);
	    
	    if(curr!= prev)
	        ans += curr;
	}
    return ans;
}

string compression2(string str)
{
    string ans="";
    ans += str[0];
    int cnt = 1;
	for(int i = 1 ; i < str.length(); i++)
	{
	    char curr = str.at(i);
	    char prev = str.at(i-1);
	    
	    if(curr == prev)
	        cnt++;
	        
	    else
	    {
	        if(cnt != 1)
	            ans += to_string(cnt);
	        ans += curr;
	        cnt = 1;
	    }
	}
	
	if(cnt != 1)
	   ans += to_string(cnt);
	   
    return ans;
}
int main()
{
    string str;
    cin>>str;
    cout<<compression1(str)<<"\n";
    cout<<compression2(str);
}