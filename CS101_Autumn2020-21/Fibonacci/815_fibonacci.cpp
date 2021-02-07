#include<simplecpp>

main_program{
long int r,n,m,q,k,c;
cin>>n>>k;
r=0;
q=1;
c=1;
cout<<r<<endl;
while(c<n){
m=(r+q)%k;
cout<<m<<endl;
q=r;
r=m;
c=c+1;
}
}
