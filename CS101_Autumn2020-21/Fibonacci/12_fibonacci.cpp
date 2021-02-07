#include<simplecpp>

main_program{
    long int n,k, f1=0,f2=1,f3,fj,fk;
    cin>>n>>k;
    cout<<f1%k<<endl;
    cout<<f2%k<<endl;
    repeat(n-2){
        f3=(f2%k+f1%k)%k;
        cout<<f3<<endl;

        fj=f2%k;
        fk=f3%k;
        f2=fk;
        f1=fj;

    }


}
