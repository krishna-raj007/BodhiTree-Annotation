#include<simplecpp>
main_program{
 long long int f1=0,f2=1,n,k,f3;
 cin>>n>>k;
 cout<<f1<<endl;
 cout<<f2<<endl;
 repeat(n-2){
  f3=f2;
  f2 = f1 + f2;
  f1 = f3;
  f2 = f2%k;
  cout<<f2<<endl;
 }
}
