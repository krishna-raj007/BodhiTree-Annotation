#include<simplecpp>

main_program{
long long int n,f_0,f_1;
long long int m,f,k;
cin>>n>>k;
f_0=0,f_1=1;
 while((1<=n<=100000)&&(1<k<=100000)){
 //f0=0,f1=1;
 f=f_0+f_1;
  m=f%k;
 cout<<m;
 f_0=f_1;
 f_1=f;
 }
 wait(5);
}
