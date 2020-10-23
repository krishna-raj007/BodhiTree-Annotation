#include<simplecpp>

main_program{

double t,v,n;
v=0;
cin>>n;
for( t=0;t<=n;t++){
    v=v+pow(-1,t)/(2*t+1);
    }

cout<<4*v<<endl;
}
