#include <simplecpp>
main_program{
long long int n,k;
cin>>n>>k;
if((n>=1)&&(n<=100000)&&(k>1)&&(k<=100000) )
 {
  long long int F0 = 0, F1= 1, F2;
  cout<<F0<<endl;
  cout<<F1<<endl;
  for(int i=1; i<=n-2; i++)
  {
   F2 = (F0%k + F1%k)%k ;
   cout<<F2<<endl;
   F0=F1;
   F1=F2;
  }
 }
}
