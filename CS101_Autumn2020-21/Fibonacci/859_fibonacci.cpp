#include<simplecpp>

main_program{
int n,k,d,a=0,c,b=1;
 cin>>n>>k;
 cout<<(a%k)<<endl<<(b%k)<<endl;
 repeat(n-2){
   c=a+b;
   a=b;
   b=c;
   d=abs(c);
   cout<<(d%k)<<endl;}

}
