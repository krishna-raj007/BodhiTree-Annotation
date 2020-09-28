#include<simplecpp>
main_program{
  long long int i=1, m, n, fac=1;
  cin>>n>>m;
  repeat(n){
    fac*=i;
    fac=fac%m;
    i++;
  }
  cout<<fac%m;
}
