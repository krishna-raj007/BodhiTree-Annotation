#include<simplecpp>

main_program{

	//Write your code here
	int n,i=1,s;
	long int d=1,m;
	cin>>n>>m;
	repeat(n) {
	d=(d*i)%m; i++;}
	cout<<d;
	}
