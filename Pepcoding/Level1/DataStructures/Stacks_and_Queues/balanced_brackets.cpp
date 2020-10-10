/*
1. You are given a string exp representing an expression.
2. You are required to check if the expression is balanced i.e.
closing brackets and opening brackets match up well.

e.g.
[(a + b) + {(c + d) * (e / f)}] -> true
[(a + b) + {(c + d) * (e / f)]} -> false
[(a + b) + {(c + d) * (e / f)} -> false
([(a + b) + {(c + d) * (e / f)}] -> false

*/
#include<iostream>
#include<stack>
using namespace std;
 
void bal_bracket(string str)
{
    stack <char> s;
    for(int i = 0; i< str.length();i++)
    {
        if(str[i] == '(' || str[i] =='{' || str[i] == '[')
            s.push(str[i]);
        
        else if(str[i] == ')')
        {
            if(s.empty() || s.top() != '(')
            {
            cout<<"false";
            return;
            }
            else s.pop();
        }
        else if(str[i] == '}')
        {
            if(s.empty() || s.top() != '{')
            {
            cout<<"false";
            return;
            }
            else s.pop();
        }
        else if(str[i] == ']')
        {
            if(s.empty() || s.top() != '[')
            {
            cout<<"false";
            return;
            }
            else s.pop();
        }
        else{}
    }
    if(s.empty()) cout << "true";
    else cout<<"false";
    return;
}

int main()
{
    string str;
    getline(cin,str);
    bal_bracket(str);
}