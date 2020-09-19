/*
1. You are given a string str of digits. (will never start with a 0)
2. You are required to encode the str as per following rules
    1 -> a
    2 -> b
    3 -> c
    ..
    25 -> y
    26 -> z
3. You are required to calculate and print the count of encodings for the string str.

     For 123 -> there are 3 encodings. abc, aw, lc
     For 993 -> there is 1 encoding. iic 
     For 013 -> This is an invalid input. A string starting with 0 will not be passed.
     For 103 -> there is 1 encoding. jc
     For 303 -> there are 0 encodings. But such a string maybe passed. In this case 
     print 0.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    getline(cin,str);
    int len = str.length();
    
    int dp[len] = {0};
    dp[0] = 1;
    for(int i = 1; i < len; i++)
    {
        if(str.at(i - 1) == '0')
        {
            if(str.at(i) != '0')
            {
                dp[i] = dp[i - 1];
            } 
        } 
        else 
        {
            stringstream num(str.substr(i - 1, i + 1));
            int val = 0;
            num>>val;
            if(str.at(i) != '0')
            {
                dp[i] = dp[i - 1];
            }

            if(val <= 26)
            {
                dp[i] += i == 1? 1: dp[i - 2];
            }
        }
    }

    cout<<dp[len-1];
}
