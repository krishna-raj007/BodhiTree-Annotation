#include <simplecpp>

main_program{
long long int n,k;
cin>>n>>k;
long long int a,b,s;
int f_0,f_1;
a=f_0;
b=f_1;
cout<<a%k<<endl<<b%k<<endl;
repeat(n-2){
  s=(a%k+b%k)%k;
  a=a%k;
  b=s;
cout<<s<<endl;


}




}
