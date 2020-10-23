#include<simplecpp>

main_program{

	//Write your code here
 double T,S,I,i;
 long int n;
 cin>>n;
 i=0;
 S=0;
 repeat(n+1){I=2*i+1;
 T=pow(-1,i)*1/I;
 S=S+T;
 i=i+1;
 };
 cout<<4*S<<endl;

}
