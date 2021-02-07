#include<simplecpp>

main_program{

long int n,k,f=0,f1=1,F,r,r1;

cin>>n>>k;
cout<<f<<endl<<f1%k<<endl;
for(int i=0;i<n-2;i++){
    F=f1+f;
    r=F%k;
    r1=f1%k;
    f=r1;
    f1=r;

    cout<<r<<endl;






}
}
