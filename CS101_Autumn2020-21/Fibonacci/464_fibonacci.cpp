#include<simplecpp>
main_program{
  long int n,k,x=0,y=1,f_i;
  cin>>n>>k;
  if(n>=1&&n<=1e5&&k>1&&k<=1e5){
    cout<<(x%k)<<"\n"<<(y%k)<<"\n";
    for(int i=2;i<n;i++){
    f_i=x%k+y%k;
    cout<<(f_i%k)<<"\n";
    x=y%k;y=f_i;
    }}}



