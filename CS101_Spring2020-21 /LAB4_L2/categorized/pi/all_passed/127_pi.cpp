#include<simplecpp>
main_program{
double x,s,b,p;
int n;
cin>>n;
x=(-1);
s=0;
b=0;
repeat(n+1){
    x=x*(-1);
    p=1/(2*b+1);
    s=s+(x*p);
    b=b+1;

    }
cout<<(4*s);

}
