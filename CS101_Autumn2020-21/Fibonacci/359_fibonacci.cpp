#include<simplecpp>

main_program{
long int n,k,a,b,c;
cin>>n>>k;
cout<<"0"<<"\n"<<"1"<<"\n";
a=0;b=1;
repeat(n-2){
    c=a%k+b%k;
    cout<<c%k<<"\n";
    a=b;
    b=c;
    }

}
