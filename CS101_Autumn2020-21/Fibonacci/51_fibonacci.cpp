#include<simplecpp>

main_program{
int n, k;
cin >>n>>k;
unsigned int a, b, c, d;   a=0;  b=1; cout<<a%k<<"\n"<<b%k<<"\n";
repeat(n-2){
c=a+b; a=b; b=c;  d=c%k;
cout<<d<<"\n";
}
}
