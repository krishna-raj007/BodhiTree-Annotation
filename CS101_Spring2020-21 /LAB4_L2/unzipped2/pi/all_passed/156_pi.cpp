#include<simplecpp>
main_program{
int i=1,n;
double s=1;
cin>>n;
repeat(n){
s=s+pow(-1,i)/((2*i*1.0)+1);
i++;
}
cout<<4*s;
}
