#include<simplecpp>

main_program{
long int n,k;
cin>>n>>k;

long int f0=0,f1=1;
long int f_n=f0;
long int f_n1=1,f_n2=0;
cout<<f0%k<<endl<<f1%k<<endl;
for(int i=2;i<n;i++)
{
f_n=(f_n1+f_n2)%k;
f_n2=f_n1;
f_n1=f_n;
cout<<f_n%k<<endl;
}

}
