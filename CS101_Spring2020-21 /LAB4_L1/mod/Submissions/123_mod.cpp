#include<simplecpp>

main_program{

    long int m,n,i;
    long  int mult=1;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        mult=mult*i;
        mult=mult%m;
        }
        cout<<mult;
}


