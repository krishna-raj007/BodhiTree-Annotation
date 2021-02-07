#include<simplecpp>

main_program{
long int a=0,b=1,k,n,i;
cin>>n>>k;
cout<<a%k<<"\n"<<b%k<<"\n";
repeat(n-2){
i=(a+b)%k;
a=b;
b=i;
cout<<i<<"\n";
}
}
