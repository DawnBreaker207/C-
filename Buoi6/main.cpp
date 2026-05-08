#include<bits/stdc++.h>
using namespace std;

int m,n,a[100], b[100], C[100][1000]= {};
string x,y;


int p,q,O[100][100]= {};


void TRACE1 (int n, int m) {
	if(C[n][m]==0) return;
	while(C[n][m]== C[n-1][m]) n--;
	TRACE(n-1, m-a[n]);
	cout<<"\nChon vat kt" <<a[n]<<" gt "<<b[n];
}

void TRACE2 (int n, int m) {
	if(C[n][m]==0) return;
	while(C[n][m]== C[n-1][m]) n--;
	while(C[n][m]==C[n][m-1]) m--;
	TRACE(n-1, m-a[n]);
	cout<<"\nChon vat kt" <<a[n]<<" gt "<<b[n];
}

// Input 4 7, 2 3, 4 8, 3 6, 5 9, 3 5
void backpack() {
	cin>>n>>m;
	for(int i = 1; i<=n; i++) cin>>a[i]>>b[i];
	for(int i =1; i<=n; i++)
		for(int j=1; i<= m; j++)
			if(a[i]>j) C[i][j]=C[i-1][j];
			else C[i][j]=max(C[i-1][j],b[i]+C[i-1][j-a[i]]);
	cout<<C[n][m]<<"\n";

	TRACE1(n,m);
}


void stringInput() {
	cin>>x;
	p=x.size();
	x = "$"+x;
	cin>>y;
	q=y.size();
	q="$"+y;

	for(int i=1; i<= p; i++)
		for(int i=1; j<= m; i++)
			for(int j=1; i<= m; j++)
				if(x[i]==y[j]) C[i][j]=1+C[i-1][j-1];
				else C[i][j]=max(C[i-1][j], C[i][j-1]);
	cout<<"do dai xccdn "<<C[n][m]<<"\n";
	TRACE2(n,m);

}

main() {
}