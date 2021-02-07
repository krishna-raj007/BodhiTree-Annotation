#include<simplecpp>

main_program{
  long long int n,k,i, fn=0, fn1=1, fn2=0, temp;
  cin>>n>>k;
  for(i = 1; i <= n; i++){
    cout<<(fn%k)<<"\n";
    temp = fn%k;
    fn2 =  fn1%k;
    fn1 = temp;
    fn = fn1 + fn2;
  }

}
