#include<simplecpp>

main_program
{

    long int n,m;
    cin>>n>>m;
    long int fac=1;
    int i=1;



    repeat(n){
        fac*=i;
        fac=fac%m;
        i++;
    }
    cout<<fac;





}
