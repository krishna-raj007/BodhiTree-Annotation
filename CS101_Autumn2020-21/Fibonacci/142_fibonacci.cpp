#include <simplecpp>
main_program{

unsigned long long int n,k,f0=0,f1=1,f2;
cin>>n>>k;
cout<<f0%k<<endl;
cout<<f1%k<<endl;

repeat(n-2){

f2=(f0%k+f1%k)%k;

cout<<f2%k<<endl;

f0=f1;
f1=f2;

}

}
