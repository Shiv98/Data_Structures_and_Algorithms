/*
Next Greater Element To The Right
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to "next greater element on the right" for all elements of array
4. Input and output is handled for you.

"Next greater element on the right" of an element x is defined as the first element to
right of x having value greater than x.
Note -> If an element does not have any element on it's right side greater than it, 
consider -1 as it's "next greater element on right"
e.g.
for the array [2 5 9 3 1 12 6 8 7]
Next greater for 2 is 5
Next greater for 5 is 9
Next greater for 9 is 12
Next greater for 3 is 12
Next greater for 1 is 12
Next greater for 12 is -1
Next greater for 6 is 8
Next greater for 8 is -1
Next greater for 7 is -1

*/

#include <bits/stdc++.h> 
using namespace std; 

vector<int> nger(int arr[], int n)
{
    vector<int> ans;
    stack<int> st;
    for(int i = n-1; i>=0;i--)
    {
        while(!st.empty() && st.top() <= arr[i]) st.pop();
        
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i< n; i++)
        cin>>arr[i];
    vector<int>ans = nger(arr,n);
    for ( int a : ans)
        cout<<a<<"\n";
}
