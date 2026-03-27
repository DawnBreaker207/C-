#include<bits/stdc++.h>
using namespace std;

int main() {
//  Method 1
//	int x[100]= {},A,B,C,D,dem=0;
//	cin>>A>>B;
//	for (int i =A; i< B; i++)
//		x[i]++;
//	cin>>C>>D;
//	for(int i=C; i< D; i++)
//		x[i]++;
//
//	for(int i =0; i<100; i++)
//		dem+=x[i]==2;
//	cout<<dem;

//  Method 2
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max(min(b,d)-max(a,c),0);
}