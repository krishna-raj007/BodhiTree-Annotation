#include<simplecpp>

main_program{
int n;
double x=1,y=1;
cin>>n;
repeat(n){x=x+2;
           y=y+pow(-1,x)*1/x;}
           cout<<4*y;

}

