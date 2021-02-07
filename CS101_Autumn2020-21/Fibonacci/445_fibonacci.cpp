#include<simplecpp>
main_program{
long int n , k , t , t1=0 , t2=1;

cin >> n >> k ;

cout << t1 << endl << t2 <<endl;

	for(int i=0 ; i<(n-2) ; i++){
		t= t1 +t2 ;
		t1=t2%k ;
		t2=t%k;


		cout << t%k <<endl ;

	}

}
