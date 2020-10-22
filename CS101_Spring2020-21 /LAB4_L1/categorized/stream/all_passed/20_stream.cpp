#include<simplecpp>

main_program{

	int n,lar;
	cin>>lar;
	while(n!=(-1))
	{	
		cin>>n;
		if(n>lar)
		lar=n;
	}
	cout<<lar;
}
