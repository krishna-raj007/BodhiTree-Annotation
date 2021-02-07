
#include<simplecpp>

main_program{
long long int n,k;

cin>>n>>k;
int a=0;
int b=1;
long long int sum;
long long int c,d;
c=a;
d=b;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
sum=((c%k)+(d%k))%k;
c=d%k;
d=sum;

cout<<sum%k<<endl;

}}
