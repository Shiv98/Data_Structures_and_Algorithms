//You are required to find the span of input. Span is defined as difference of maximum value and minimum value.
#include<iostream>
using namespace std;
int get_span(int arr[], int n)
{
    int max = arr[0], min = arr[0];
    for(int i = 0 ; i<n ; i++)
    {
        if (arr[i]< min)
            min = arr[i];
        if (arr[i]> max)
            max =arr[i];
    }
    return max-min;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int span = get_span(arr,n);
    cout<<span;
    
}