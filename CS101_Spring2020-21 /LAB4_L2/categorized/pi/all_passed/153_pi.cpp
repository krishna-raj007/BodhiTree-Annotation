#include<simplecpp>
main_program{
int n,p=0;
double t=0;
cin>>n;
repeat(n+1){
t=t+(pow(-1,p))*1/(2*p+1);
p=p+1;}
cout<<4*t<<endl;
}

