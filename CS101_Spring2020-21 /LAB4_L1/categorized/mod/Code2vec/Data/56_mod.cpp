#include<simplecpp>

main_program{

	long int n,S;
	int i,m;
	cin>>n>>m;
    int C=n;
    n=1;
    S=1;
    repeat(C){
	S = ((S%m)*((n)%m))%m;
	n = n+1;
	}
cout<<S<<endl;
}
