#include<simplecpp>

main_program{int n,m,i=1,b;
cin>>n>>m;

repeat(n){

b=(b*i)%m;

i=i+1;
}
cout<<b;
}
