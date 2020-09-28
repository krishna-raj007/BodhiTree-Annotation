#include<simplecpp>
main_program{

float n,a,x,y,z=0;
repeat(n){
repeat(a){
cin>>x>>y;
z=z+(x-y)*(x-y);
}
z=sqrt(z);
cout<<z<<endl;
}
}
