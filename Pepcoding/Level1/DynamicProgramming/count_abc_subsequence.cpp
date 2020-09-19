/*
1. You are given a string str.
2. You are required to calculate and print the count of subsequences of the nature a+b+c+.
For abbc -> there are 3 subsequences. abc, abc, abbc
For abcabc -> there are 7 subsequences. abc, abc, abbc, aabc, abcc, abc, abc.
*/
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int a = 0, ab = 0, abc = 0;
    for( int i = 0; i<str.length();i++)
    {
        if(str.at(i)=='a')
            a = 2* a + 1;
        else if(str.at(i)=='b')
            ab = 2* ab + a;
        else if (str.at(i)=='c')
            abc = 2*abc + ab;
    }
    cout<<abc;
}