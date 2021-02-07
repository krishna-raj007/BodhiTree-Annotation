#include<simplecpp>

main_program{
int a,b,k,n,c;
cin>>n>>k;
a=0; b=1;
repeat(n){
c=a+b;
cout<<a%k;
cout<<("\n");
a=b;
b=c;}
}
