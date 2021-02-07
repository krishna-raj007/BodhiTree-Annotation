#include<simplecpp>

main_program
{
	long long int f1=0,f2=1,f3;
	
	long long int n,k;
	
	cin>>n>>k;
	
	if(n==1) {cout<<f1%k;}
	
	else if(n==2) {cout<<f1%k<<endl<<f2%k;}
	
	else {
	
		cout<<f1%k<<endl<<f2%k<<endl;
		 
		for(int p=3; p<=n;p++) 
		{
			
			f3 = (f2+f1)%k;
			f1=f2;
			f2=f3;
			
			cout<<f3<<endl;
			
		}
		
	}
	
}
			
				
