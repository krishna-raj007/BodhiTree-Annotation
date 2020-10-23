#include<simplecpp>
#include<math.h>

main_program{
int n,i=1;
double z=1;
cin>>n;

while(i<=n){
 z=z+pow(-1,i)/(2*i+1);
   i++;
}

cout<<4*z;
}
