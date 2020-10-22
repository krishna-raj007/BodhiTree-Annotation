#include<simplecpp>

main_program{
long int n,m,k=1;
cin>>n>>m;
long int i=1;
repeat(n){
k=(k*i)%m;
i++;
}
cout<<k;
}
