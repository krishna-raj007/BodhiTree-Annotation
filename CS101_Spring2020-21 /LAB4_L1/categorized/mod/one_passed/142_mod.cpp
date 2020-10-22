#include<simplecpp>

main_program{
long int n,i=1,x,m;
cin>>n>>m;
 repeat(n-1){
n=i*n;i=i+1;}
x=n%m;
cout<<x<<endl;

}
