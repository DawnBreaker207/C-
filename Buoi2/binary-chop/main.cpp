#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
#define x first
#define y second
double kc(Diem u, Diem v) {
	return (u.x-v.x)*(u.x-v.x)+(u.y-v.y)*(u.y-v.y);
}
int main() {
	Diem A,B,C,M;
	double eps= 1e-6;
	cin>>A.x>>A.y>>B.x>>B.y>>M.x>>M.y;
	while(abs(A.x-B.x)>eps or abs(A.y-B.y)>eps) {
		C={(A.x+B.x)/2,(A.y+B.y)/2};
		kc(M,A)>kc(M,B) ? A=C : B=C;
	}
	cout<<A.x<<" "<<A.y;
}