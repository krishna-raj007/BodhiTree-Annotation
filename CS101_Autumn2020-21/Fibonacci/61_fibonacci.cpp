#include<simplecpp>

main_program{
//Write your code here
long int n,k,x,z,m,i,y;

cin>>n>>k;
y=0;
x=1;
cout<<y<<endl;
cout<<x<<endl;
for(i=0;i<=n-3;i++){
z=x+y;
m=z%k;

cout<<m<<endl;
y=x;
x=z;

}

}
