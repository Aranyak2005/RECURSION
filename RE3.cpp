#include<bits/stdc++.h>
using namespace std;

// Reverse an array
void reverse(int i,int arr[],int n)
{
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	reverse(i+1,arr,n);
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(0,arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}	
	return 0;
}
