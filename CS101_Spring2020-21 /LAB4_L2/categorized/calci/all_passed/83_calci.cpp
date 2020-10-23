#include<simplecpp>

main_program{
int n;
float b,c;
char a;
cin>>n;
repeat(n)
{cin>>b;
cin>>a;
cin>>c;
switch(a)
{ case'+': cout<<b+c<<endl; break;
  case'-': cout<<b-c<<endl;break;
  case'*': cout<<b*c<<endl;break;
  case'/': cout<<b/c<<endl;break;
  default: cout<<"-1"<<endl;
   }

}}




