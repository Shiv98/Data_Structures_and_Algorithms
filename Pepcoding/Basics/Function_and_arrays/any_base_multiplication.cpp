// Show the result of multiplication of two numbers of any base b.

#include<iostream>
using namespace std;


int product_digit(int b,int n1,int d2)
{
     int rv = 0;

     int c = 0;
     int p = 1;
     while(n1 > 0 || c > 0){
        int d1 = n1 % 10;
        n1 = n1 / 10;

       int d = d1 * d2 + c;
       c = d / b;
       d = d % b;

       rv += d * p;
       p = p * 10;
     }

     return rv;
    
}

int getsum(int b, int n1, int n2)
{
    int rv = 0;

   int c = 0;
   int p = 1;
   while(n1 > 0 || n2 > 0 || c > 0){
      int d1 = n1 % 10;
      int d2 = n2 % 10;
      n1 = n1 / 10;
      n2 = n2 / 10;

      int d = d1 + d2 + c;
      c = d / b;
      d = d % b;

      rv += d * p;
      p = p * 10;
   }

   return rv;
}
int product(int b, int n1, int n2)
{
    int rv = 0;
    int c = 0;
    int p = 1;
    while(n2 > 0){
    int d2 = n2 % 10;
    n2 = n2 / 10;
    
    int pwd = product_digit(b, n1, d2);
    rv = getsum(b, rv, p * pwd);
    p = p * 10;
    }
    return rv;
}

int main()
{
    int b,n1,n2;
    cin>>b>>n1>>n2;
    int ans = product(b,n1,n2);
    cout<<ans;
    return 0;
}