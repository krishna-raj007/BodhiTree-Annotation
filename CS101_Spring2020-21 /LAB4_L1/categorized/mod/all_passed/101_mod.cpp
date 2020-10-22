#include<simplecpp>

main_program{

	long int n,m,r,i=1;
	cin>>n;
	cin>>m;
	repeat(n-1){
	n = n*i;
	n= n%m;
	i = i+1;}
	r = n % m;
	cout<<r;

}
