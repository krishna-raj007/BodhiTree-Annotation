#include<simplecpp>

main_program{

    long long int n,m,fac=1,i=1;
    cin>>n>>m;

    repeat(n){

      fac = fac * i;
      i++;
      fac = fac%m ;

    }


    cout<<fac;


}
