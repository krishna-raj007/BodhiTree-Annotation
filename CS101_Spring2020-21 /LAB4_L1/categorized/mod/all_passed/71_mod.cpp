#include<simplecpp>

main_program{
long int n,m;
cin>>n>>m;
long int i=0;
long int result=1;
repeat(n){
long int a=(n-i)%m;
result=(result*a)%m;
i++;
}
long int b=result%m;
cout<<b;
}
