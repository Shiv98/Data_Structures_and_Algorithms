#include<bits/stdc++.h>
using namespace std;

void permutations(string ques,string pp)
{
    if(ques.length()==0)
    {
        cout<<pp<<"\n";
        return;
    }
    
    for(int i = 0;i<ques.length();i++)
    {
        char ch = ques.at(i);
        string ros = ques.substr(0,i)+ques.substr(i+1);
        permutations(ros,pp + ch);
    }
}
int main()
{
    string str;
    getline(cin,str);
    permutations(str,"");
}