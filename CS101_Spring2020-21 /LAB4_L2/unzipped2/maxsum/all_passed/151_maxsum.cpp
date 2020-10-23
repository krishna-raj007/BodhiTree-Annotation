#include<simplecpp>

main_program{
 long int n;
 int a,b,s,t=0,r=0;
 cin>>n;
 cin>>a;
 repeat(n-1){
 cin>>b;
 s=a+b;if(s>=r) r=s;
 t=s;
 a=b;
 };
 cout<<r<<endl;
 }
