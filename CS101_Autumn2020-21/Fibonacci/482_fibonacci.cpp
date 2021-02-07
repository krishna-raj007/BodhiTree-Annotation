#include<simplecpp>
main_program{
long int a=0,b=1,z,x,y,n,m,j;
x=a;
y=b;
cin>>n;
cin>>j;
cout<<a<<"\n";
repeat(n-1){
     z=x+y;
     x=z;
     b=z-b;
     y=b;
     m=z%j;
     cout<<m<<"\n";
     }
     wait(5);
}
