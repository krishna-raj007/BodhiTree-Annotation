#include<simplecpp>
main_program{
long long int n,k0,fi=0,fj=1,fk,k=3;
cin>>n>>k0;
if(n<3){cout<<(fi)%(k0)<<endl;
        if (n>1) cout<<(fj)%(k0)<<endl;}
else{
    cout<<(fi)%(k0)<<endl;
    cout<<(fj)%(k0)<<endl;
    while(k<=n){
    fk=fi+fj;
    cout<<(fk)%(k0)<<endl;
    fi=fj;
    fj=fk;
    k++;
    }
}

}

