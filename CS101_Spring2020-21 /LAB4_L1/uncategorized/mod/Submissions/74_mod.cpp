#include<simplecpp>

main_program{
long long int n,m,a=1,p=1;
cin>>n>>m;
repeat(n){p=(p*(a%m))%m;a=a+1;}

cout<<p;

}
