#include<simplecpp>

main_program{

	int a,u,n,answer;
	cin>>n;

	repeat(n){
	    cin>>a;
	    answer=max(answer,a+u);
	    u=a;
	}
	cout<<answer<<endl;

}





