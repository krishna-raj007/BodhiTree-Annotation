#include<simplecpp>

main_program{
  long long n,k;
  cin>>n>>k;
  long long f1=0,f2=1,fn;
  cout<<f1%k<<endl<<f2%k<<endl;
  repeat(n-2){
    fn=f1+f2;
    long long a=fn%k;
    cout<<a<<endl;
    f1=f2;
    f2=a;
   }



}
