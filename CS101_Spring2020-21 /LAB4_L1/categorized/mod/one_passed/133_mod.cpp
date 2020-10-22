#include<simplecpp>

main_program{
long int n,b=1,m;
cin>>n>>m;
while(n>0){
     b=n*b;
    n=n-1;

}
b=b%m;
cout<<b;

}
