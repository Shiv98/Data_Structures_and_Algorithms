#include<iostream>
using namespace std;
int main()
{
    int n,digits=0,power = 1;
    cin>>n;
    int temp = n;
    while(temp>=10)
    {
       digits++;
       power *= 10;
       temp /= 10;
    }
    while(power!=0)
    {
        cout<<n/power<<"
";
        n = n%power;
        power/= 10;
    }
}