#include<simplecpp>
main_program{
long int n,m;
cin>>n>>m;
long int x=1;
for(int i=1;i<=n;i++){
x=(x*i)%m;
}
double modvalue=x;
cout<<modvalue;
}
