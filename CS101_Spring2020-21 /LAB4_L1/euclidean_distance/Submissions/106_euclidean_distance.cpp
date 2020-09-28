#include<simplecpp>
main_program
{
int n,p;
float a,b,c,d;
cin>>p;
repeat(p){
cin>>n;
d=0;
repeat(n)
{
cin>>a;
cin>>b;
c=(a-b)*(a-b);
d=c+d;
}
cout<<sqrt(d);
}
}
