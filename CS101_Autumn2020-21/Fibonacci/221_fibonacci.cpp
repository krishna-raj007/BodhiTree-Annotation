#include<simplecpp>

main_program{

long long int n,a=0,b=1,c,k;
cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;
for (int i=2; i<n; i++){
c=a+b;
cout<<abs(c%k)<<endl;
a=b;
b=c;
}
}
