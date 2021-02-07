#include<simplecpp>
main_program{
	long int n , k , term ;
	cin>>n>>k ;
	int t1=0 , t2=1 ;
	cout<<t1<<endl<<t2<<endl;
	for(int i=0 ; i<(n-2) ; i++){
		term= t1 +t2 ;
		t1=t2%k ;
		t2=term%k;
		cout<<term%k<<endl ;

	}
	}
