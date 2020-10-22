#include<simplecpp>
main_program{
 int s;cin>>s;
 int t=0;
 repeat(s){
 int n;
 cin>>n;
 if(n%2==0)
 t++;
 if(n%3==0)
 t++;
 if(n%5==0)
 t++;
 if(n%7==0)
 t++;
 if(n%11==0)
 t++;
 cout<<t<<endl;t=0;}
 }
