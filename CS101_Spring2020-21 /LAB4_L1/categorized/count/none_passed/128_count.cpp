#include<simplecpp>

main_program{
int q;cin>>q;
int c=0,d=0,e=0,f=0,g=0;
repeat(q){
int n;
cin>>n;
if(n%2==0)
c++;
if(n%3==0)
d++;
if(n%5==0)
e++;
if(n%7==0)
f++;
if(n%11==0)
g++;
}
cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g;
}
