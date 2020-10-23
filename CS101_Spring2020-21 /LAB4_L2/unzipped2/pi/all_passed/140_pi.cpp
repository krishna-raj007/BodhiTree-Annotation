#include<simplecpp>

main_program{

	int n,i=0;
	cin>>n;
	double s=0,b,r;
	repeat(n+1){
	    double a=-1;
	repeat(i+1){
	a=a*(-1);
	}
	b=2*i+1;
	r=a/b;
	i++;
	s=s+r;
	}
	cout<<4*s;
	}
