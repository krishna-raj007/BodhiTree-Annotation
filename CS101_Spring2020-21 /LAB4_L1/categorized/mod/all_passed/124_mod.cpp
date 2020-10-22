#include<simplecpp>

main_program{
 long int n,m,y;
 cin>>n;
 cin>>m;
 y=1;
 repeat(n)
 {y=((n%m)*(y%m))%m;
 n=(n-1);}
 cout<<y%m;

	//Write your code here

}
