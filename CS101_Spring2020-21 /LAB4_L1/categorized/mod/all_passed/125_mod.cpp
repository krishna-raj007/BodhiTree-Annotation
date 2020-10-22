#include<simplecpp>

main_program{

                long long int n,m,prod,i,e,k;
                 prod=1;
                  i=1;
                  k=1;
                 cin>>n>>m;

                 repeat(n){
                            prod=((prod%m)*(k%m))%m;
                            k+=1;

                            }



                 cout<<prod;

}









