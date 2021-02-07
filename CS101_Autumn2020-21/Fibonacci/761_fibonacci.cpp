#include<simplecpp>

main_program{
int n, k;
int j;
cin>>n;
cin>>k;
int f1=0, f2=1;
cout<<f1%k<<endl;
for(j=1;j<n;j++)
{
cout<<f2%k<<endl;
int next=f1+f2;
f1=f2;
f2=next;
}
}
