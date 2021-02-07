#include<simplecpp>
main_program{
	int n, m;
	int F0=0, F1=1; 
	
	int l1, l2;

	cin >> n >> m;
	l1= F0%m;  cout << l1 << endl;
	l2=F1%m;    cout << l2 << endl;
	int l3;

	repeat(n-2){

		l3 = (F0+F1)%m;   cout << l3 << endl;
       F0=F1;  F1=l3;

	}
	wait(0);
}