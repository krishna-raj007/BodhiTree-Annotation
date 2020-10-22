#include<simplecpp>

main_program{
    long int n, m, rem;

    cin>>n>>m;

    rem = 1;
    repeat(n-1){
        rem= (rem*(n%m))%m;
        n--;
    }
    cout<<rem;


}
