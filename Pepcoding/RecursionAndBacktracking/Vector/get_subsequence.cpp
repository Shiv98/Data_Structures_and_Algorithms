#include<bits/stdc++.h>

using namespace std;

vector<string> subsequence(string str)
{
   if(str.length()==0)
   {
   vector<string> ans;
   ans.push_back("");
   return ans;
   }
   
   char ch = str.at(0);
   string sub = str.substr(1);
   
   vector<string> rres = subsequence(sub);
   vector<string> ans;
   
   for(string rstr: rres)
   {
       ans.push_back(rstr);
   }
   for(string rstr: rres)
   {
       ans.push_back(ch+rstr);
   }

   return ans;
}

int main()
{
    string str;
    getline(cin,str);
    
    vector<string> ans = subsequence(str);
    cout<<"[";
    for(int i = 0 ; i < ans.size() ; i++){
        if(i != ans.size()-1)
        cout<<ans[i]<<", ";
        
        else
        cout<<ans[i];
    }
    cout<<"]";
}