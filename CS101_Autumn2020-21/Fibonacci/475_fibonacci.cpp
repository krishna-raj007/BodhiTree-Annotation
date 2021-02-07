#include<simplecpp>
main_program{
long long p,m,n,k,q=0,r=1;
cin>>n>>k;
cout<<q%k<<endl;
cout<<r%k<<endl;
repeat(n-2){p=q+r;q=r;r=p%k;m=p%k;cout<<m<<endl;}}
