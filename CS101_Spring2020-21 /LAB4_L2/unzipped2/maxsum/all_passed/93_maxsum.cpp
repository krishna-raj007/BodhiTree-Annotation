#include<simplecpp>

main_program{

	int n, a1=1, a2=1, sum=0;
	int i=1, mx=1;
	cin>>n;
	repeat(n){
	a1=a2;
	cin>>a2;
	sum=a2+a1;
	mx=max(mx,sum);
	}
	cout<<mx;

}
