#include<simplecpp>

main_program{
    long int a,t,i,m;
    cin>>a>>m;
    i=1;
    t=1;
    repeat(a){
    t=t*i;
    i++;
    t=t%m;

    }
    cout<<t;
}
