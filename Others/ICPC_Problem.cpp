/*
ICPC Problem
Suman is preparing for ICPC. His friend Raju is interested to be a team member of Suman's team. He asked Suman to take him in his team. Suman wants to perform well in ICPC. So he will only take Raju in his team if he solves an interesting problem. He gave Raju a string 
S which consists of digits between 1to 9inclusive. Raju can insert '∗' to some position (possibly none) between two letters of the string. Only one '∗' can be inserted between two letters.After inserting '∗'Raju will get formulae like strings that can be evaluated. So he has to evaluate all possible formulae and find the product of all results modulo 10^9 + 7.

EG:
1
123
 (123) * (1*23) *(12*3) * (1*2*3) = 611064

*/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int evaluate(string str)
{
  string t;
  int product = 1;
  stringstream X(str);
  while(getline(X,t,'*'))
  {
    int val = stoi(t);
    product *= val;
  }
  return product;
}

int main()
{
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  {
    string n;
    getline(cin,n);
    long long int ans = 1;
    int ind = pow(2,n.length()-1);
    
    for(int i = 0; i < ind; i++)
    {
      string str ="";
      int dec = i;

      for(int j = 0; j < n.length(); j++)
      {
        int r = dec % 2;
        dec = dec / 2;
        
        str += n[j];
        if(r==1)
        str += "*";
       }
       
       //cout<<"str : "<<str<<"\t"<<"res :"<< evaluate(str)<<"\n";
       ans  *= evaluate(str);
       
    }
    
    ans = ans % MOD;
    cout<<ans<<"\n";    
  }
  
  return 0;
}