#include<simplecpp>
main_program{
long long int x=0,y=1,z=1,n,k;
cin>>n>>k;
cout<<x%k<<endl;
cout<<y%k<<endl;
while(z<=n){
z=x+y;
x=y;
y=z;
cout<<z%k<<endl;
}
}
