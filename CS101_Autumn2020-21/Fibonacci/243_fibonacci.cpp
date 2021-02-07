#include<simplecpp>

main_program{
long unsigned int a,b,s,m,n,k;
a=0;
b=1;
cin>> n>>k;
cout<<a<<endl;
if (n>1){ cout<<b<< endl;
repeat(n-2){
  s=a+b;
  a=b;
  b=s%k;
  cout<<b<<endl;

}
}




}
