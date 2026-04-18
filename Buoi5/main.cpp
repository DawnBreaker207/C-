#include<bits/stdc++.h>
using namespace std;


// Tiling
void tiling() {
	int n;
	cin>>n;
	long c[n+5]= {0,1,2,4,5,6,7};
	for(int i =3; i<= n; i++) {
		c[i] = c[i-1] + c[i-2];
	}
	cout<<c[n];
}

// Stair
void stair() {
	int n;
	cin>>n;
	long c[n+5]= {0,1,2,4};
	for(int i =4; i<= n; i++) {
		c[i] = c[i-1] + c[i-2] + c[i-3];
	}
	cout<<c[n];
}
//
void test() {
	int n;
	cin>>n;
	long a[n+5] = {};
	for(int i=1; i <= n; i++) {
		cin>>a[i];
		a[i]+=max(a[i-1],0L);
	}
	cout<<*max_element(a+1, a+n+1);
}

int n,m,a[105],C[105][1005]= {};
void TRACE(int n, int m) {
	if(C[n][m]==0) return;
	while(C[n][m]== C[n-1][m]) n--;
	TRACE(n,m-a[n]);
	cout<<a[n]<<" ";
}


void counting() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int j=1; j<= m; j++) C[0][j]=1e9;
	for(int i=1; i<= n; i++)
		for(int j=1; i<=m; j++)
			if(a[i] > j) C[i][j] = C[i-1][j];
			else C[i][j]=min(C[i-1][j],1+C[i][j-a[i]]);
	if(C[n][m] == 1e9) cout<<"\nkhong doi duoc";
	else {
		cout<<"\nSo to "<<C[n][m]<<"\n";
		TRACE(n,m);
	}
}
main() {
//	tiling();
//	stair();
//	test();
	counting();
}