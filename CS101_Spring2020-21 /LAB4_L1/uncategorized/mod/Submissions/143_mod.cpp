#include<simplecpp>

main_program{
long int n,k=1,i=1,m;
cin>>n>>m;
repeat(n){
k=(k*(i%m))%m;
i=i+1;
}
cout<<k;
}
