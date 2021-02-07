#include <simplecpp>

main_program{
	long int n,k; cin>>n>>k;
	long int rec1 = 0,rec2 = 1,t=0;
	t = rec1 + rec2;
	cout << rec1 <<endl <<rec2<<endl;
	
	repeat(n-2) {
		cout << t % k<< endl;
		rec1 = rec2;
		rec2  =t;
		t = rec1 + rec2;	
}
for(n>=93)	repeat(93) {
		cout << t % k<< endl;
		rec1 = rec2;
		rec2  =t;
		t = rec1 + rec2;	
}


}