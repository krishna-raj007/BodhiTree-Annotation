#include <simplecpp>
main_program{
	int n1=0,n2=1,n3,n4,n,k; 
	cout<<"enter the value of n and k ";
	cin>>n>>k;
    cout<<endl<<n1<<endl<<n2<<endl;  
    for(int i=2;i<n;++i)    
    {    
      n3=(n1%k)+(n2%k);    
      n4=n3%k;
      cout<<n4<<endl;   
      n1=n2;    
      n2=n3;    
    }
  }