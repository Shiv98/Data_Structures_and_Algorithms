/*
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1

Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5
*/
#include <bits/stdc++.h>
using namespace std;
long int findTriplet(int arr[], int n)
{
	sort(arr, arr + n); long int t=0;
	for (int i = n - 1; i >= 0; i--) {
		int j = 0;
		int k = i - 1;
		while (j < k)
		{
			if (arr[i] == arr[j] + arr[k])
			  {t++;j++;k--;}
			else if (arr[i] > arr[j] + arr[k])
				j++;
			else
				k--;
		}
	}
return t;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n;
	 cin>>n; int arr[n],i;
	 for(i=0;i<n;i++)
	 cin>>arr[i];
	 long int ans=findTriplet(arr, n); 
	 if(ans)
	 cout<<ans<<endl;
	 else
	 cout<<"-1"<<endl;
	}
	return 0;
}