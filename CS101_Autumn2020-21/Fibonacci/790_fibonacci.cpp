#include<simplecpp>

main_program{
    int f1=0;
    int f2=1;

    int n,k;

    cin>>n>>k;

    if(n==1)cout<<f1%k;

    if(n==2)cout<<f1%k<<endl<<f2%k;

    long long int fi,fj,fk;

    if(n>=3){

    cout<<f1%k<<endl;
    cout<<f2%k<<endl;

    fi=f1;
    fj=f2;


    repeat(n-2){
        fk=(fi+fj)%k;
        fi=fj;
        fj=fk;

        cout<<fk<<endl;

    }
    }



}
