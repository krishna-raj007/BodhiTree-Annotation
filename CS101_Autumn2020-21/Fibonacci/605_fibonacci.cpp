#include<simplecpp>
main_program{
long long int n,a,i,j,l;
int k;
cin>>n>>k;
i=0;j=0;l=1;
for(a=0;a<n;a++)
{
cout<<i<<endl;
i=(j+l)%k;
l=j;
j=i;
}
}
