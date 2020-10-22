#include<simplecpp>
main_program{
int q,m,a;
cin>>q;
repeat(q){m=0;
    cin>>a;
if(a%2==0) m=m+1 ;
if(a%3==0) m=m+1;
if(a%5==0) m=m+1;
    if(a%7==0) m=m+1;
    if(a%11==0)m=m+1 ;
cout<<m<<endl;}}


