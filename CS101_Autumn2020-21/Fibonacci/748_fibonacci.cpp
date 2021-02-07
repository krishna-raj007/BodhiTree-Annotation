#include<simplecpp>

main_program{
	int n, k;
	cin>>n>>k;
	int f0=0, f1=1, f2;
	
	cout<<f0<<endl;
	repeat(n-1){
		cout<<(f1%k)<<endl;
		f2 = (f0 + f1)%k ;
		f0=f1; f1=f2;
		}
	}
