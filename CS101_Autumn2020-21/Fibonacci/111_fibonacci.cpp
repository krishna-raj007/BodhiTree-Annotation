#include<simplecpp>

main_program{
long int n,k,a=0,b=1,c=0;
cin >> n >> k ;
for (int i=1 ; i <= n ; i++){
if (i==1)
   {cout<<a<<endl; continue;}
if (i==2)
   {cout<<b<<endl; continue;}
c=(a+b)%k;
a=b;
b=c;
cout<<c<<endl;
}
}
