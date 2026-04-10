#include<bits/stdc++.h>
using namespace std;



// Priority Queue
struct cmp {
	bool operator()(int a,int b) {
		return a%2 >b%2;
	}
};

void queuePriority() {
	priority_queue<int, vector<int>, cmp> Q;

	for(int x: {
	            4,7,2,8,4,8,3,2
	        }) Q.push(x);

	while(Q.size()>0) {
		cout<<Q.top()<< " ";
		Q.pop();
	}
}

void connectPipe() {
	long n,res  = 0,x;
	priority_queue<int, vector<int>,greater<int>> Q;
	cin>>n;

	while(n--) {
		cin>>x;
		Q.push(x);
	}

	while(Q.size()>1) {
		x=Q.top();
		Q.pop();
		x+=Q.top(),Q.pop();
		res+=x;
		Q.push(x);
	}
	cout<<res;
}

void findMedian() {
	priority_queue<int> L;
	priority_queue<int, vector<int>,greater<int> > R;
	int n,x;
	cin>>n;

	for(int i = 1; i <= n; i++) {
		cin>>x;
		i%2 ? L.push(x) : R.push(x);
		if(i>1 && L.top() > R.top()) {
			L.push(R.top());
			R.push(L.top());
			L.pop();
			R.pop();
		}
		cout<<L.top()<<" ";
	}
}

void detective() {
	priority_queue<pair<int, int>> Q;
	int n,x,k;
	cin>>n>>k;
	for(int i =1; i<= n; i++) {
		cin>>x;
		Q.push({x,i});
		while(i-Q.top().second >= k) Q.pop();
		if(i>=k) cout<<Q.top().first<<" ";
	}
}
main() {
//	queuePriority();
//	connectPipe();
//	findMedian();
	detective();
}