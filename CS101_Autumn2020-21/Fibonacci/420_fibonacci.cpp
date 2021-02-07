#include<simplecpp>

main_program{
long int n,k,b=1,q=1,a=0,c;
cin>>n>>k;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
    c=a+b;
    cout<<c%k<<endl;
    a=b;
    b=c;
    }
}
