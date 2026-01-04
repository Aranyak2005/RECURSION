#include<bits/stdc++.h>
using namespace std;

void name(int i,int n) //printing names n times
{
	if(i>n) return;
	cout<<"Aranyak"<<endl;
	name(i+1,n);
} // time complexity O(n)

void linearly(int i,int n) //printing numbers linearly n times
{
	if(i>n) return;
	cout<<i<<endl;
	linearly(i+1,n);
} // time complexity O(n)

void reverse(int i,int n) //printing numbers in reverse n times
{
	if(i<1) return;
	cout<<i<<endl;
	reverse(i-1,n);
} // time complexity O(n)

void linearly_bt(int i,int n) // printing numbers using back tracking
{
	if(i<1) return;
	linearly_bt(i-1,n);
	cout<<i<<endl;
} // time complexity O(n)

void reverse_bt(int i,int n) // printing numbers in reverse using back tracking
{
	if(i>n) return;
	reverse_bt(i+1,n);
	cout<<i<<endl;
} // time complexity O(n)

int main()
{
	int n;
	cin>>n;
//	name(1,n);
//	linearly(1,n);
//  reverse(n,n);
//  linearly_bt(n,n);
	reverse_bt(1,n);    
	return 0;
}
