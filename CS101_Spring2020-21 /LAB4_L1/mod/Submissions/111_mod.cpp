#include<simplecpp>

main_program{
       long long int n,m,fac=1;
      cin>>n>>m;
      while(n!=0)
      {
       fac=fac*n;
       fac=fac%m;
       n--;
      }
      cout<<fac;
}
