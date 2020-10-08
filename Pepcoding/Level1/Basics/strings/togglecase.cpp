/*
1. You are given a string that contains only lowercase and uppercase alphabets. 
2. You have to toggle the case of every character of the given string.
*/
#include<iostream>
#include<string>
using namespace std;

string toggleCase(string str)
{
    for(int i = 0 ; i< str.length();i++)
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<toggleCase(str);
}