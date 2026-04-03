#include<bits/stdc++.h>
using namespace std;

// Greedy Algorithm


void sortMoney() {
	int M, res = 0;
	cin>>M;
	int a[] = {500,200,100,50,20,10,5,2,1};
	for(auto x: a) {
		res+= M/x;
		M= M%x;
	}
	cout<<res;
}

void milking() {
	long res = 0,n;
	cout<< "Enter number of cow: ";
	cin>>n;
	int a[n];
	// Enter a[0] -> a[n-1]
	for(auto &x:a) {
		cout<< "Enter milking number: ";
		cin>>x;
	}
	sort(a, a+n); // Sorting
	for(int i = 0; i< n and a[i] > i; i++) res+=a[i]-i;
	cout<< "Number of milking was: " <<res << endl;

}

void dancing() {
	int res = 0, n, m;
	// Enter a[0] -> a[n-1]
	cout<< "Enter number of male and female: ";
	cin>> n>> m;
	int a[n];
	for(auto &x:a) {
		cout<< "Enter male number: ";
		cin>>x;
	}
	sort(a, a + n);
	//
	int b[m];
	for(auto &x:b) {
		cout<< "Enter female number: ";
		cin>>x;
	}
	sort(b, b + m);

	for(int i = 0,j=  0; i< n and j < m; i++) {
		if(a[i] > b[j]) {
			res++;
			j++;
		}

	}
	cout<< "Number of pairs was: " << res << endl;
}


void puppets() {
	queue<int> Q;
	int n,x,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);

	for(int x: a) {
		Q.push(x);
		if(Q.front() + k<= x) Q.pop();
	}
	cout<<Q.size();


}
int main() {
//	sortMoney();
//	milking();
//	dancing();
//	puppets();
	return 0;
}
