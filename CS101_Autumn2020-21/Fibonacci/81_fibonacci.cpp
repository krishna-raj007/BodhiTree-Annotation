#include<simplecpp>

main_program{
long long int n,k,p0,p1,q0;
cin>>n>>k;
int F0=0,F1=1;
p0=F0;p1=F1;
cout<<F0%k<<endl;
cout<<F1%k<<endl;
repeat(n-2){
    q0=((p1)%k+(p0)%k)%k;
    p0=(p1)%k;
    p1=q0;
    cout<<q0<<endl;
    }
}

