#include<simplecpp>

main_program{
long long n,j,x,b,c,y;
cin>>n>>j;
x=0, b=1;
cout<<x%j<<endl<<b%j;
repeat(n-2){
c=x+b;
y=c%j;
cout<<"\n"<<y;
x=b;
b=y;
}
}
