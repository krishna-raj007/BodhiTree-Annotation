#include<simplecpp>

long int a=0,b=1,c,n,k,m;

main_program{

cin>>n>>k;

cout<<0<<"\n"<<1<<"\n";

repeat(n-2) {

c=b+a;

m=c%k;

cout<<m<<"\n";

a=b;

b=c;


}


}
