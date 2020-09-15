#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,val;
  cin>>n;
  stack <int> s;
  for(int i = 0 ; i<n ; i++)
  {
    cin>>val;
    if(s.empty()== true)
      s.push(val);
      
    else
    {
      if(val == s.top())
      {
        s.pop();
        val += 1;
        if( s.empty() || s.top()!= val)
          s.push(val);
        else
        {
          while(val == s.top())
          {
            s.pop();
            val += 1;
            if(s.empty())
            break;
          }
          s.push(val);
        }
      }
      else
      {
        s.push(val);
      }
    }
  }
  
  cout<<s.size()<<"\n";
  
  return 0;
}