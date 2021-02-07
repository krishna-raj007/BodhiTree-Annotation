#include<simplecpp>
main_program{
long long int n,k,a1=0,a2=1,a,y;
cin>>n>>k;
cout<<0<<endl<<1<<endl;
repeat(n-2){
a=a1+a2;
y=((a1%k)+(a2%k))%k;
y=y%k;
cout<<y<<endl;
a1=a2%k;
a2=a%k;
}
}
