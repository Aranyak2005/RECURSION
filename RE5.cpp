#include<bits/stdc++.h>
using namespace std;
// Fibonacci Series
int fibonacci(int n)
{
	if(n<=1) return n;
	int last=fibonacci(n-1);
	int seclast=fibonacci(n-2);
	return last+seclast;
}

int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}

// TC is O(2^n) exponential
