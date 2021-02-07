#include<simplecpp>
main_program{
long int a,b,c,d,e;
long unsigned int f;
cin>>a>>b;
c=0;
d=1;
cout<<0%b<<endl;
cout<<1%b<<endl;
repeat(a-2){
e = (d%b + c%b)%b;
cout<<e<<endl;
c = d;
d = e;
}
}
