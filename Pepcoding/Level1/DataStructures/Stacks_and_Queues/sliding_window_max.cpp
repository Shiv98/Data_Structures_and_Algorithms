/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing the elements of array a.
3. You are given a number k, representing the size of window.
4. You are required to find and print the maximum element in every window of size k.

e.g.
for the array [2 9 3 8 1 7 12 6 14 4 32 0 7 19 8 12 6] and k = 4, 
the answer is [9 9 8 12 12 14 14 32 32 32 32 19 19 19]
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> sliding_wm(vector<int> arr, int k)
{
    vector<int> ans;
    int n = arr.size();
    int nger[n];
    stack<int> st;
    st.push(n-1);
    nger[n-1] = n;
    for(int i = n-2;i>=0;i--)
    {
        while(!st.empty() && arr[i] >= arr[st.top()]) st.pop();
        
        if(st.empty()) nger[i] = n;
        else nger[i] = st.top();
        st.push(i);
    }
    
    int j = 0;
    for(int i = 0; i <= n - k; i++){
      if(j < i) j = i;

      while(nger[j] < i + k){
        j = nger[j];
      }
      ans.push_back(arr[j]);
    }
    return ans;
}

int main()
{
    int n,val,k;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        
        cin>>val;
        v.push_back(val);
    }
    cin>>k;
    vector<int> ans = sliding_wm(v,k);
    for(int i : ans) cout<<i<<"\n";
}