#include<simplecpp>

main_program{
unsigned long int n,m,a=0,b=1,y,t;
cin>>n>>m;
cout<<a<<"\n"<<b<<"\n";
repeat(n-2){y= (a+b)%m; cout<<y<<"\n"; a=b; b=y;}

}




















