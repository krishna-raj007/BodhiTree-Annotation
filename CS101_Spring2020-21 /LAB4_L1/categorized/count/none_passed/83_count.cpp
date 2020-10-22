#include<simplecpp>
main_program
{ int Q,A,sum,d,e,f,g,h;
 cin>>Q;
 for(int i=0;i<Q;i++)
    {sum=0;
    cin>>A;

     d=A%2;
     e=A%3;
     f=A%5;
     g=A%7;
     h=A%11;
     if(d==0)sum+=1;
     if(e==0) sum+=1;
     if(f==0)sum+=1;
     if(g==0) sum+=1;
     if(h==0) sum+=1;
     cout<<sum;

 }}

