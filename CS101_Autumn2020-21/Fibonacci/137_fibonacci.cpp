#include<simplecpp>

main_program{
long int a,b,n0=0,n1=1,xx,m1,m2,mn;
cin>>a>>b;
m1=n0%b;
m2=n1%b;
cout<<m1;
cout<<m2;
repeat(a-2){
xx=m1+m2;
mn=xx%b;
m1=m2; m2=mn;
cout<<mn



}





}
