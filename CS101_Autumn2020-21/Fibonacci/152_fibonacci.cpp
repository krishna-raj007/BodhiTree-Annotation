#include <simplecpp>

main_program{
	int n,k,F0=0,F1=1,Fn;
	cin>>n>>k;
	cout<<F0%k<<endl;
	cout<<F1%k<<endl;
    for(int i=0;i<n-2;i++){
    	Fn =F0+F1;
    	cout<<Fn%k<<endl;
    	
    	F0=F1;
    	F1=Fn;
    }
}