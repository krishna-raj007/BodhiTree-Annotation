#include<simplecpp>

main_program{

	long long int n,n1=0,n2=1,pos=0,sum;
	cin>>n;
	while (n1 < n){
        sum=n1+n2;
        n1=n2;
        n2=sum;
        pos=pos+1;
	}
	if (n1==n) cout<<pos;
	else cout<< -1;
}
