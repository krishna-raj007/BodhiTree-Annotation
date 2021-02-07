#include<simplecpp>

main_program{
unsigned long long int n,k,a=1,b=0,c=1;
cin>>n>>k;
cout<<"\n"<<"0";
repeat(n-1)
 {
 cout<<"\n"<<c%k;
 c=(a%k+b%k)%k;
 b=a%k;
 a=c%k;
 }

}
