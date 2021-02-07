#include<simplecpp>

main_program{
long long int n;
long long int k;
cin>>n>>k;
int f1=0; int f2=1;
long long int fi;
cout<<f1<<endl;
cout<<f2<<endl;
for(long long int i=0;i<n-2;i++)
{ fi=(f1+f2)%k;
cout<<fi<<endl;
f1=f2;
f2=fi;
}
}
