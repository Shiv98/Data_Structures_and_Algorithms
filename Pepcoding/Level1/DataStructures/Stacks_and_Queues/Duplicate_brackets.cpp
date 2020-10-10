/*
Duplicate Brackets
1. You are given a string exp representing an expression.
2. Assume that the expression is balanced  i.e. the opening and closing brackets match with each other.
3. But, some of the pair of brackets maybe extra/needless. 
4. You are required to print true if you detect extra brackets and false otherwise.
e.g.'
((a + b) + (c + d)) -> false
(a + b) + ((c + d)) -> true

*/
#include<iostream>
#include<stack>
using namespace std;
 
void duplicate_bracket(string str)
{
    stack <char> s;
    for(int i = 0 ; i< str.length();i++)
    {
        if(str[i]!=')') s.push(str[i]);
        else
        {
            if( s.top()=='(')
            {
                cout<<"true";
                return;
            }
            else
            {
                while(s.top() !='(') s.pop();
                s.pop();
            }
            
        }
        
    }
    cout<<"false";
    return;
}

int main()
{
    string str;
    getline(cin,str);
    duplicate_bracket(str);
}