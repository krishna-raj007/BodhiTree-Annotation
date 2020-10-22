#include<simplecpp>

main_program{

    int i = 1;
    long int n,m;
    long int fact = 1;

    cin>>n>>m;

    repeat(n){
        fact = ((fact%m)*(i%m))%m;
        i++;

    }

    cout<<fact;


}
