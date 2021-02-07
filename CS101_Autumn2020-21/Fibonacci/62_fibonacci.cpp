#include<simplecpp>
main_program{
  long long int i,n,k,f1=0,f2=1,f3;
  cin>>n>>k;
  cout<<f1%k<<endl;
  cout<<f2%k<<endl;
  repeat(n-2){
    f3=(f1+f2)%k;
    cout<<f3<<endl;
    f1=f2;
    f2=f3;
    }
}
