#include<simplecpp>

main_program{
long int n,m,i=1;
int a=1;
cin>>n>>m;
repeat(n){
a=((a%m)*(i%m))%m;
i=i+1;
}
cout<<a;
}
