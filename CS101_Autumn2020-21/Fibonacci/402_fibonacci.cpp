#include<simplecpp>

main_program{
//Write your code here
long long unsigned int n,i,f,f1=0,f2=1,m1,m2,k;
cin>>n>>k;
m1=0%k;
m2=1%k;
cout<<m1<<endl<<m2;
for(i=2;i<n;i++)
{
f=(f1+f2)%k;
f1=f2;
f2=f;
cout<<endl<<f;
}
}
