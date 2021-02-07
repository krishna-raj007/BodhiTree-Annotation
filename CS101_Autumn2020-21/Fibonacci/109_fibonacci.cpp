#include<simplecpp>
main_program{
	int n,k;
	cin>>n>>k;
	int F0=0,F1=1;
	while(n>=1){
	cout<<F0%k<<endl;
	if(n>=2){
		cout<<F1%k<<endl;
	}
	F0=F1+F0;
	F1=F1+F0;
	n=n-2;
    }
}