
#include<simplecpp>

main_program{
  long long n,k;
  cin>>n>>k;
  long long fibo1=0,fibo2=1,fibon;
  cout<<fibo1%k<<endl<<fibo2%k<<endl;
  repeat(n-2){
    fibon=fibo1+fibo2;
    long long term=fibon%k;
    cout<<term<<endl;
    fibo1=fibo2;
    fibo2=term;
   }



}
