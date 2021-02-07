#include<simplecpp>

main_program{
  long long f0=0, f1=1, n, k, nextTerm=0;
  cin>>n>>k;
  for(int i=1; i<=n; i++){
    if(i==1){cout<<" "<<f0;continue;}
    if(i==2){cout<<" "<<f1;continue;}
    nextTerm = (f0+f1)%k;
    f0=f1;
    f1=nextTerm;
    cout<<" "<<nextTerm;}
}
