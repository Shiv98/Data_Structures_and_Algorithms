/*Given an array of positive integers where all numbers occur even number of times
 except one number which occurs odd number of times. Find the number.*/

 // using XOR
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,res = 0;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[n];
	        res = res^arr[n];
	    }
	    cout<<res<<"\n";
	}
	return 0;
}

// using hashmap
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,res = 0;
	    cin>>n;
	    unordered_map<int,int> hash;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[n];
	        hash[arr[i]]++;
	    }
	    for(auto i: hash)
	    {
	        if(i.second % 2!= 0)
	        {
                cout<<i.first<<"\n";
                break;
	        }
	    }
	    
	}
	return 0;
}