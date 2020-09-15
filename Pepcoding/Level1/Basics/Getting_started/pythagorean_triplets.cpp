#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a = a*a;
    b = b*b;
    c = c*c;
    if(a+b==c || a+c==b || b+c==a)
        cout<<"true";
    else
        cout<<"false";
}