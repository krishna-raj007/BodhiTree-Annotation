#include<simplecpp>

main_program{
int n;
cin>>n;
float a=1.0,s=0;
int i=0;

repeat(n+1)
{  int p = pow(-1,i);
   a= p*a;
   s=s+a;
   i=i+1;
   a=1.0/(2*i+1);


}
cout<<4*s<<endl;

}
