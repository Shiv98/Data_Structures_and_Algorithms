#include <iostream>
using namespace std;

int binarysearch(int arr[], int l, int h, int k)
{
    if(l<=h)
    {
    int mid = (l+h)/2;
    if(arr[mid]==k)
        return 1;
    else if(arr[mid]>k)
        return binarysearch(arr,l,mid-1,k);
    else
        return binarysearch(arr,mid+1,h,k);
    }
    else 
    return -1;
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    cin>>arr[i];
	    int ans = binarysearch(arr,0,n-1,k);
	    cout<<ans<<"\n";
	}
	return 0;
}