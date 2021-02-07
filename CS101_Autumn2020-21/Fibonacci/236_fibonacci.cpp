#include<simplecpp>
main_program{
 int n,k;
 cin>>n>>k;
 int a=0,b=1,s=0;
 cout<<a%k<<endl<<b%k<<endl;
 for(int i=0; i<=n-3;i++){
 s=((a%k)+(b%k))%k;
 a=b;
 b=s;
cout<<s<<endl;
 }

}
