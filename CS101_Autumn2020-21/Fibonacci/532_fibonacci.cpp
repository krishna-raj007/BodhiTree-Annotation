#include<simplecpp>

main_program{
long long int n,a=0,b=1,c,k;
cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;
repeat(n-2){
c=a+b;
a=b%k;
b=c%k;
cout<<c%k<<endl;}

}
