#include<simplecpp>

main_program{

  int n,k;
  cin>>n>>k;
  int a=0,b=1,c;
  cout<<a<<endl<<b<<endl;
  for(int i=1;i<n-1;i++)
  {

   c=b+a;
	cout<<c%k<<endl;
	a=b;
	b=c;
  }
}
