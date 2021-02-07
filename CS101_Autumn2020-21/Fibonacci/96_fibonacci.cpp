#include<simplecpp>

main_program{

int n,a,i=0,j=1,l,k;
cin>>n>>k;
cout<<0<<endl<<1<<endl;
for(a=1;a<n-1;a++){

l=i+j;
i=j;
j=l;
cout<<l%k<<endl;
}
}
