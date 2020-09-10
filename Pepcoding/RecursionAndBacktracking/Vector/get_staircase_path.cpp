/*
Question
1. You are given a number n representing number of stairs in a staircase.
2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
Input Format
A number n
Output Format
Contents of the arraylist containing paths as shown in sample output
Constraints
0 <= n <= 10
Sample Input
3
Sample Output
[111, 12, 21, 3]
*/
#include<bits/stdc++.h>

using namespace std;

vector<string> gsp(int n)
{
    if(n<=0)
    {
        vector<string> ans;
        if(n==0)
            ans.push_back("");
            
        return ans;
    }
    
    vector<string> res1 = gsp(n-1);
    vector<string> res2 = gsp(n-2);
    vector<string> res3 = gsp(n-3);
    vector<string> mres;
    
    for(string rstr: res1)
    {
        mres.push_back(to_string(1)+rstr);
    }
    for(string rstr: res2)
    {
        mres.push_back(to_string(2)+rstr);
    }
    for(string rstr: res3)
    {
        mres.push_back(to_string(3)+rstr);
    }
    return mres;
    
}

int main()
{
    int n;
    cin>>n;
    
    vector<string> ans = gsp(n);
    cout<<"[";
    for(int i = 0 ; i < ans.size() ; i++){
        if(i != ans.size()-1)
        cout<<ans[i]<<", ";
        
        else
        cout<<ans[i];
    }
    cout<<"]";
}