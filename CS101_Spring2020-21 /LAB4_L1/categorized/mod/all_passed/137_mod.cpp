#include<simplecpp>

main_program{
          int i=1;
          long int a,b=1,c=1,n,m;
          cin>>n>>m;
          repeat(n){
                     b=((b%m)*(i%m)%m);
                     i++;
                   }
          cout<<b;
}
