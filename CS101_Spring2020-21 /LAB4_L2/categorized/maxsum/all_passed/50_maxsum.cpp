#include<simplecpp>

main_program{

     int n=0;
	 long long int m=0,a=0,b=0;
	 cin>>n;
	 repeat(n)
	 {
	 cin>>a;
	 m=max(a+b,m);
     b=a;
	 }
	 cout<<m;

}
