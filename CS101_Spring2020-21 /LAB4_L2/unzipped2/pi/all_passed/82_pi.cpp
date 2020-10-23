#include<simplecpp>

main_program{
             double sum=1,term,i=2,b,a=1;
             int n;
             cin>>n;

             repeat(n){
                       a=(-1)*a;
                       b=2*i-1;
                       term=a/b;
                       sum=sum+term;
                       i=i+1;
                       }
                cout<<4*sum;
                       }
