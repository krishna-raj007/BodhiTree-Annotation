#include<simplecpp>

main_program{
int n,a,i,m,product=1;
cin>>n>>m;
i=1;
repeat(n){
product=product*i;
i=i+1;
product=product%m;}
cout<<product;
}
