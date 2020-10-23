#include<simplecpp>

main_program{
int n,p=0;
cin>>n;
double t=0;
repeat(n+1)
{
t=t+(pow(-1,p))*1/(2*p+1);
p=p+1;
}
cout<<t*4<<endl;
}
