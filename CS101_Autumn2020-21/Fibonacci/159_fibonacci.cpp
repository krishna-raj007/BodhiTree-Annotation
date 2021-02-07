#include<simplecpp>

main_program{
	long n,k,fact_prev1=0,fact_prev2=1,fact;
	cin>>n>>k;
	if(n>=1)
		cout<<fact_prev1%k<<endl;
	if(n>=2)
		cout<<fact_prev2%k<<endl;
	for(long i=2;i<n;i++){
		fact=(fact_prev1 + fact_prev2)%k;
		cout<<fact<<endl;
		fact_prev1 = fact_prev2;
		fact_prev2 = fact;
	}
}