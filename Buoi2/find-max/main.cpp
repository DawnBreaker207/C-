#include<bits/stdc++.h>
using namespace std;

int main() {
	long n, res= 0;
	cin>>n;
	int a[n+5],L[n+5],R[n+5];
	for(int i=1; i<=n; i++)
		cin>>a[i];
	L[1]=a[1];

	for(int i=2; i<=n; i++)
		L[i] = max(a[i],L[i-1]);

	R[n]=a[n];

	for(int i =n-1; i>0; i--)
		R[i]=max(a[i],R[i+1]);

	for(int i=2; i<n; i++)
		res+=max(0,min(L[i-1],R[i+1])-a[i]);
	cout<<res;
}