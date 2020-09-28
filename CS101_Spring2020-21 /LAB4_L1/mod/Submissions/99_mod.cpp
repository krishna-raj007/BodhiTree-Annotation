#include<simplecpp>

main_program{

	int n,m,f;
	int p=1;
	int t=1;
	cin>>n>>m;

	for(int i=1;i<=n;i++){

	t=i%m;
	p=p*t;
	p=p%m;


	}
	f=p%m;
	cout<<f;
}
