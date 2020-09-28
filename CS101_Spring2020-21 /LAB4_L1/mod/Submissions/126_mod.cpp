#include<simplecpp>

main_program{

	long int m,n,i=1,term=1;
	cin>>n>>m;
	repeat(n){
        term=(term*(i%m))%m;
        i++;}
        cout<<term;

}
