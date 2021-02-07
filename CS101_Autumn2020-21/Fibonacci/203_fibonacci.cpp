#include<simplecpp>
main_program{long long int n,k,p,q=0,r=1;
cin>>n>>k;
cout<<q%k<<endl<<r%k<<endl;
for(int i=1;i<=n-2;i++)
{p=q+r;
q=r%k;
r=p%k;
cout<<p%k<<endl;
}
}
