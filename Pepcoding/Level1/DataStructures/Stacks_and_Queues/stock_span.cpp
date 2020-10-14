/*
Question
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing the prices of a share on n days.
3. You are required to find the stock span for n days.
4. Stock span is defined as the number of days passed between the current day
and the first day before today when price was higher than today.
*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockspan(int arr[], int n)
{
    vector<int> span {1};
    stack<int> st;
    st.push(0);
    for(int i = 1; i<n;i++)
    {
        while(!st.empty() && arr[st.top()]<arr[i])
            st.pop();
            
        if(st.empty()) span.push_back(i+1);
        
        else span.push_back(i - st.top());
        
        st.push(i);
    }
    return span;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i< n; i++)
        cin>>arr[i];
    
    vector<int> ans = stockspan(arr,n);
    for(int val : ans)
        cout<<val<<"\n";
}