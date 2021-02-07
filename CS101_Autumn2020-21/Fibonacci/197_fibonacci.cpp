#include<simplecpp>

main_program{
long long int f_n2=0,f_n1=1,f_n,k,n;
cin>>n>>k;
cout<<f_n2%k<<endl<<f_n1%k<<endl;
for(long long int i=3;i<=n;i++){
f_n=(f_n2+f_n1)%k;
cout<<f_n%k<<endl;
f_n2=f_n1;
f_n1=f_n;
}
}
