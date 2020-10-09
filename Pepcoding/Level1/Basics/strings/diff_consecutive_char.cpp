/**
String With Difference Of Every Two Consecutive Characters
Question
1. You are given a string that contains only lowercase and uppercase alphabets. 
2. You have to form a string that contains the difference of 
    ASCII values of every two consecutive characters between those characters.
    For "abecd", the answer should be "a1b3e-2c1d", as 
    'b'-'a' = 1
    'e'-'b' = 3
    'c'-'e' = -2
    'd'-'c' = 1

Sample Input
pepCODinG

Sample Output
p-11e11p-45C12O-11D37i5n-39G

*/
#include<iostream>
#include<string>
using namespace std;

string diffchar(string str)
{
    string result ="";
    for(int i = 0 ; i<str.length()-1;i++)
    {
        int diff = str.at(i+1)-str.at(i);
        result += str.at(i) + to_string(diff);
    }
    result += str[str.length()-1];
    return result;
}

int main()
{
    string str;
    cin>>str;
    cout<<diffchar(str);
}