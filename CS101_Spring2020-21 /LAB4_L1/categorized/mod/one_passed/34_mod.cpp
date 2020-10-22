#include<simplecpp>

main_program{
long int m,n,t,z;
cin>>n>>m;
t=n;
repeat(n-1){
n=n-1;
t=n*t;
}
z=t%m;
cout<<z<<endl;

}
