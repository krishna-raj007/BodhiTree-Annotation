#include<simplecpp>

main_program{
long long int n,k,f,f0=0,f1=1;
cin>>n>>k;
cout<<f0<<endl;
cout<<f1<<endl;
repeat(n-2){
f= f0%k + f1%k;
cout<<f%k<<endl;
f0=f1;
f1=f;
}
}
