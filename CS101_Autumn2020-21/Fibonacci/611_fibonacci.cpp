#include<simplecpp>

main_program{
unsigned long long int n,k;
cin>>n>>k;

long int fi=0,fj=1,fk=1;
cout<<(0%k)<<endl;
cout<<(1%k)<<endl;
for(unsigned long long int i=1;i<n-1;i++)
    {

    fk=(fi+fj)%k;
    cout<<fk<<endl;
    fi=fj;
    fj=fk;


    }



}
