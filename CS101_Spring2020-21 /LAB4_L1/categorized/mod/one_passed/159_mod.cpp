#include<simplecpp>

main_program{

	long int i, n, m, a, b;
	i=1;
	a=1;
	cin>> n>> m;
	n<=100000;
	m<=1000000000;
	repeat(n){
	i=i*a;
	a=a+1;
	}

	b=i%m;
	cout<< b;
}
