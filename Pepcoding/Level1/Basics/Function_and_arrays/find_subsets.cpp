/*
Question
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to print all subsets of arr. Each subset should be
on separate line. For more clarity check out sample input and output.

Sample Input
3
10
20
30
Sample Output
-	-	-	
-	-	30	
-	20	-	
-	20	30	
10	-	-	
10	-	30	
10	20	-	
10	20	30	
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ind = pow(2,n);
    for(int i = 0; i < ind; i++){
       int dec = i;
       string str = "";

       for(int j = 0; j < n; j++){
          int r = dec % 2;
          dec = dec / 2;

          if(r == 0){
            str = "-\t" + str;
          } else {
            str = to_string(arr[n - 1 - j]) + "\t" + str;
          }
       }
       cout<<str<<"\n";
    }
}