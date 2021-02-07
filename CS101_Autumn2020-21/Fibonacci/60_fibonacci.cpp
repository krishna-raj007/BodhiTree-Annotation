#include<simplecpp>

main_program{
 long long int m,f,n,k,a=0,b=1;
 cin>>n>>k;
 cout<<"0"<<endl<<1%k<<endl;
 for(long int i=3; i<=n; i++){
   f=((a%k)+(b%k))%k;
   a=b;
   b=f;
   cout<<f%k<<endl;
 }
}
