#include<simplecpp>

main_program{

    long int a,b,i,p;
    cin>>a>>b;

    p = max (a,b);
    cin>>i;

    while(i > 0){

        p = max(p,i);
        cin>>i;

        }

    cout<<p;



}
