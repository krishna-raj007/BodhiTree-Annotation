#include<simplecpp>

main_program{
	long unsigned int n,k,next_num,n1,n2;
	cin>>n>>k;
	n1=0;
    n2=1;
	cout<<n1%k<<"\n"<<n2%k<<"\n";
	repeat(n-2){
		next_num=(n1+n2)%k;
		n1=n2;
		n2=next_num;
		cout<<(next_num)<<"\n";
	}

}
