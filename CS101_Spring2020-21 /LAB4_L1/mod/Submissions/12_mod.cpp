#include<simplecpp>

main_program{
long long int m,n,fact=1;
cin>>n>>m;
for(int i=1;i<=n;i++){
fact*=i;
fact=fact%m;
}
cout<<fact;
}
