#include<simplecpp>

main_program{
	int n, k, a;
	cin>>n>>k;
	int n0=0, n1=1 ,n2;
	for(a=0;a<n;a++){
	cout<<n0%k<< endl ;
	n2= n1+ n0;
	n0=n1;
	n1=n2;
}

}
