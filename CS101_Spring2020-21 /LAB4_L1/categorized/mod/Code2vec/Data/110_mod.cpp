#include<simplecpp>

main_program{

  int n,b=1;
	cin>>n;
	long int m=1;
	repeat(n){

	    m=m*b;
	b=b+1;}
	int k,result;
	cin>>k;
	result=m%k;
	cout<<result;

}
