#include<simplecpp>
main_program{
	unsigned int n,k;
	cin>>n>>k;
	unsigned int F0=0,F1=1,next_term;
	cout<<F0%k<<endl;
	cout<<F1%k<<endl;
	for(unsigned int i=2; i<n; i++){
        next_term =F0+F1;
        F0=F1;
        F1=next_term;
        cout<<next_term%k<<endl;
    }
}