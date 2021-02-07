#include<simplecpp>

main_program{
int a,b,c,n,k;
cin>>n>>k;
a=0%k;b=1%k;
cout<<a<<"\n"<<b<<endl;
repeat(n-2){
    c=(a+b)%k;
    cout<<c<<endl;
    a=b;
    b=c;

    }

}
