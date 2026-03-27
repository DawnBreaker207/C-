int main(){
	char x[10000];
	int F[150]={};
	scanf("%s",x);
	for(char *p=x;*p!=0;p++) F[*p]++;
	for(char *p=x,c='a';c<='z';c++)
	{
	while(F[c]--) *p++=c;
	}
	printf("%s",x);
	
}

int main()
{
    int a,b;
    B1:
     cout<< "Nhap a = "; cin>>a;
     cout<< "Nhap b = "; cin>>b;
    
    B2:
    
    if(a!=b){
        a > b ? a-=b: b-=a;
        goto B2;
    }
    
    B3: cout<< "Uoc chung lon nhat "<< a;
}


int main(){
	int n;
	cin>>n;
	 
	int s[n+5];
	fill(s+2, s+n+1, true);
	for(int i = 2; i<=n; i++)
	if(s[i]){
		cout<<i<<" ";
		for(int j=i*i; i<=n; j+=i) s[j]=0;
	}
}ll