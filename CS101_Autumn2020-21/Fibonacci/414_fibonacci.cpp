#include<simplecpp>

main_program{
long unsigned int n,k,f0=0,f1=1,F=0;
int i;
cin>>n>>k;
cout<<0<<endl<<1%k<<endl;
for (i=0;i<n-2;i++)
{
F=(f0+f1);
cout<<F%k<<endl;
f0=f1;
f1=F;
}

}
