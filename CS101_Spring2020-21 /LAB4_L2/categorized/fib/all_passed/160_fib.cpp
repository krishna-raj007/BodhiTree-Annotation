#include<simplecpp>

main_program{
long long int n,a=0,b=1,c=0;
int i=2;
cin>>n;
if(n<=2)
{cout<< n;}
else{
while (c<n)
 {
  c=a+b;
   a=b;
   b=c;
   if(c==n)
   {cout<< i;break;}
   i++;
 }
if (c!=n){
    cout << -1;
}
}
}
