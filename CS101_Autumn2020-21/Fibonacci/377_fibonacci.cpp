#include<simplecpp>
main_program{
long long unsigned int n,a=0,b=1,c,k;
cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;
for(long long unsigned int i=2;i<n;i++){
cout<<(a+b)%k<<endl;
c=(a+b)%k;a=b%k;b=c%k;
}
}
