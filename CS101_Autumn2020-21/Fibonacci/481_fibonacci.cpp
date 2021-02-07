
#include<simplecpp>
main_program
{
	 int long n,k;
	 cin>>n>>k;

	 int long a1=0,a2=1,ac;
	 
	 cout<<a1<<endl;
	 if(n!=1)
	 {
	 	cout<<a2<<endl;
	 }

	 for(int i=2;i<n;i++)
	 {
	   ac=(a1%k+a2%k)%k;
	   a1=a2%k;a2=ac%k;
	   cout<<ac<<endl;

	 }
}