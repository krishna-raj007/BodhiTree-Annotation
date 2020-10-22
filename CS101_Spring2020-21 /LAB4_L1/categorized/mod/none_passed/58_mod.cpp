#include<simplecpp>

main_program{
long int a,n,m,c=1;
cin>>a>>n>>m;
repeat(n){
c=c*a;
c=c%m;
}
cout<<c<<endl;
}

