#include<simplecpp>

main_program{
int n, k;
long long int t1=0, t2=1, s;
cin>>n>>k;
cout<<"0"<<"\n";
repeat(n-1){
 cout<<t2%k<<"\n";
 s=(t2+t1)%k;
 t1=t2%k;
 t2=s;}
}
