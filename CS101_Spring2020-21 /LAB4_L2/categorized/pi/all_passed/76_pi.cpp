#include<simplecpp>

main_program{

int n;
cin>>n;
int i = 0;
float a = 0;
float b ;
while (i<=n){
    b=4.0*((pow(-1,i))*(1.0/(2*i+1)));
    a = a+b;
    i=i+1;
     }
cout<<a;

}
