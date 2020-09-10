#include<bits/stdc++.h>
using namespace std;

void printsub(string ques,string ans)
{
    if(ques.length()==0)
    {
        cout<<ans<<"\n";
        return;
    }
    
    char ch = ques.at(0);
    string sub = ques.substr(1);
    printsub(sub,ans+ch);
    printsub(sub,ans+"");
}

int main()
{
    string str;
    getline(cin,str);
    printsub(str,"");
}