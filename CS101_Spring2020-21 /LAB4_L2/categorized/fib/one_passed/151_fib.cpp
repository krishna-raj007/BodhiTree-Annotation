
#include<simplecpp>

main_program{
int x=0,y=1,z,n;
cin>>n;
repeat(n){
z=x+y;
x=y;
y=z;
}
cout<<z;



}
