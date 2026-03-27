#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,L,R;

	cin>>n;
	int a[n+5]= {};
	for(int i=1; i<=n; i++) {
		cin>>m;
		while(m--) {
			cin>>L>>R;
			cout<<a[R]-a[L-1]<<"\n";
		}
	}
}