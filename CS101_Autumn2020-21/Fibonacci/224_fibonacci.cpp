#include<simplecpp>

main_program{
  unsigned int n,k;
  cin>>n >>k;
  unsigned int Fn,Fn1=1,Fn2=0;
  cout<<Fn2%k<<endl;
  cout<<Fn1%k<<endl;
  repeat(n-2){
    Fn=Fn1 +Fn2;
    cout<<Fn%k<<endl;
    Fn2=Fn1;
    Fn1=Fn;
  }
}
