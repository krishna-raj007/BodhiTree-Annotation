#include<simplecpp>

main_program{

	int a, n, b, maximum,s1=0,s2,c;
	cin>>n;
	cin>>a;
	c=a;
	repeat(n-1){
	cin>>b;
	s2=c+b;
	if(s1>=s2){
	maximum= s1;
	}
	else if(s1<s2){
	maximum=s2;
	s1=s2;
	}
	c=b;
	}
	cout<<maximum;
}
