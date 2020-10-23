#include<simplecpp>

main_program{

long double a,b,c,t,m,d,f,n;
     cin>>n;
     cin>>a;
     cin>>b;
     cin>>c;
     m=max(a+b,b+c);
     f=c;
 repeat(n-3)
   { cin>>d;
     t=max(m,f+d);
     m=t;
     f=d;
     }
     cout<<m;


}
